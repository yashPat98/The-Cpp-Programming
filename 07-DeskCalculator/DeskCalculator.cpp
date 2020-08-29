//headers
#include <iostream>
using namespace std;


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
};


int main(void)
{

    return (0);
}

