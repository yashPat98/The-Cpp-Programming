//headers
#include <iostream>             //I/O
#include <string>               //strings
#include <map>                  //map
#include <cctype>               //isaplha(), etc
#include <sstream>
using namespace std;

//global variables 
map<string, double> table;   
int no_of_errors;               //count of errors

double error(const string& s)
{
    //code
    no_of_errors++;
    cerr << "error: " << s << '\n';
    return (1);
}

enum class Kind : char
{
    name,
    number,
    end,
    plus = '+',
    minus = '-',
    mul = '*',
    div = '/',
    print = ';',
    assign = '=',
    lp = '(',
    rp = ')'
};

struct Token
{
    Kind kind;
    string string_value;
    double number_value;
};

class Token_stream
{
    private:
        istream* ip = nullptr;      //pointer to an input stream
        bool owns;                  //does the Token_stream own the istream ?
        Token ct{Kind::end};        //current token

        void close(void)
        {
            if(owns)
            {
                delete (ip);
                ip = nullptr;
            }
        }

    public:
        //constructors
        Token_stream(istream &s) : ip{&s}, owns{false} {}
        Token_stream(istream *p) : ip{p}, owns{true} {}

        //member functions
        Token get(void);        //read and return next token
        Token& current(void);   //most recently read token

        void set_input(istream& s)
        {
            close();
            ip = &s;
            owns = false;
        }

        void set_input(istream* p)
        {
            close();
            ip = p;
            owns = true;
        }

        //destructor
        ~Token_stream()
        {
            close();
        }
} ts{cin}; 


int main(int argc, char* argv[])
{
    //function declaration
    void calculate(void);       

    //code
    //the driver
    switch(argc)
    {
        case 1:
            break;
        
        case 2:
            ts.set_input(new istringstream{argv[1]});
            break;

        default:
            error("Too Many Arguments");
            return (1);
    }


    table["pi"] = 3.141592;
    table["e"] = 2.718281;

    calculate();

    return (0);
}


Token Token_stream::get()
{
    //variable declaration
    char ch = 0;
    
    //code
    do
    {
        //skip whitespace except '\n'
        if(!ip->get(ch))
            return (ct = { Kind::end });
    }
    while(ch != '\n' && isspace(ch)); 
    
    switch(ch)
    {
        case '0':
            return (ct = { Kind::end });      //assign and return

        case '\n':
            return (ct = { Kind::end });

        case ';':
            return (ct = { Kind::end });

        case '*':
            return (ct = { Kind::mul });
        case '/':
            return (ct = { Kind::div });

        case '+':
            return (ct = { Kind::plus });

        case '-':
            return (ct = { Kind::minus });

        case '(':
            return (ct = { Kind::lp });

        case ')':
            return (ct = { Kind::rp });

        case '=':
            return (ct = { Kind::assign });

        //case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '.':
            ip->putback(ch);                //put the first digit back into the input stream
            *ip >> ct.number_value;         //read number into ct
            ct.kind = Kind::number;
            return (ct);
        
        default:                            //name, name = , or error
            /*
            if(isalpha(ch))
            {
                ip->putback(ch);            //put the first digit back into the input stream
                *ip >> ct.string_value;     //read number into ct
                ct.kind = Kind::name;
                return (ct);
            }
            */

            if(isalpha(ch))
            {
                ct.string_value = ch;
                while(ip->get(ch) && isalnum(ch)) 
                    ct.string_value += ch;             //append ch to end of string value
                
                ip->putback(ch);

                return (ct = { Kind::name });
            }

            error("bad token");
            return (ct = {Kind::print});
    }

}

Token& Token_stream::current(void)
{
    //code
    return ct;
}

void calculate(void)
{
    //function declaration
    double expr(bool);

    //code
    for( ; ; )
    {
        ts.get();
        if(ts.current().kind == Kind::end)
            break;
        if(ts.current().kind == Kind::print)
            continue;
        cout << expr(false) << "\n";
    }
}

double expr(bool get)
{
    //function declaration
    double term(bool);

    //variable declaration
    double left = term(get);

    //code
    for( ; ; )
    {
        switch(ts.current().kind)
        {
            case Kind::plus:
                left += term(true);
                break;
            
            case Kind::minus:
                left -= term(true);
                break;
            
            default:
                return left;
        }
    }
}

double term(bool get)
{
    //funtion declaration
    double prim(bool);

    //variable declaration
    double left = prim(get);

    //code
    for( ; ; )
    {
        switch(ts.current().kind)
        {
            case Kind::mul:
                left *= prim(true);
                break;

            case Kind::div:
                if(auto d = prim(true))
                {
                    left /= d;
                    break;
                }
                return error("divide by 0");

            default:
                return left;
        }
    }

}

double prim(bool get)
{
    //code
    if(get)
        ts.get();           //read next token

    switch(ts.current().kind)
    {
        case Kind::number:
        {
            double v = ts.current().number_value;
            ts.get();
            return v;
        }

        case Kind::name:
        {
            double& v = table[ts.current().string_value];       //find the correspoding
            if(ts.get().kind == Kind::assign)
                v = expr(true);
            
            return v;
        }

        case Kind::minus:
            return (-prim(true));

        case Kind::lp:
        {
            auto e = expr(true);
            if(ts.current().kind != Kind::rp)
                return error("')' expected");
            
            ts.get();
            return (e);
        }     

        default:
            return error("primary expected");
    }
}

