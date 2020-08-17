//headers
#include <iostream>
using namespace std;

class Entry
{
    private:
        enum class Tag{ number, text };
        Tag type;                          //discriminant

        //an anonymous unions (unnamed) is an object, not a type and 
        //its members can be accessed without mentioning object name

        union                              //representation
        {
            int i;
            string s;                      //string has default constructor, copy constructor and destructor
        };

    public:
        struct Bad_entry{};                //used for exceptions

        string name;

        Entry();
        Entry& operator=(const Entry&);    //necessary because of string varient
        ~Entry();

        int number() const;
        string text() const;

        void set_number(int n);
        void set_text(const string&);

        void Display();
};

//main() - entry point function
int main(void)
{
    //variable declaration
    string str = "R90";
    
    Entry e, e2, e3, e4;

    //code
    e.set_number(45);
    e2.set_text(str);

    e3 = e;
    
    e4.set_text("rajju");
    e4 = e2;

    e.Display();
    e2.Display();
    e3.Display();
    e4.Display();

    e.~Entry();

    return (0);
}

int Entry::number() const
{
    //code
    if(type != Tag::number)
        throw Bad_entry{};

    return i;
}

string Entry::text() const
{
    //code
    if(type != Tag::text)
        throw Bad_entry{};

    return s;
}

void Entry::set_number(int n)
{
    //code
    if(type == Tag::text)
    {
        s.~string();                //explicitly destroy string 
        type = Tag::number;
    }

    i = n;
}

void Entry::set_text(const string& str)
{
    //code
    if(type == Tag::text)
        s = str;
    else
    {
        new(&s) string{str};        //placement new: explicitly construct string
        type = Tag::text;           
    }
}

Entry::Entry()
{
    //code
    type = Tag::number;
    i = 0;
}

//necessary because of string variant
Entry& Entry::operator=(const Entry& e)
{
    //code
    if(type == Tag::text && e.type == Tag::text)
    {
        s = e.s;                    //usual string assignment
        return *this;
    }

    if(type == Tag::text)           //explicit destroy
        s.~string();

    switch(e.type)
    {
        case Tag::number:
            i = e.i;
            break;
        
        //some bug
        case Tag::text:
            s = e.s;
            type = e.type;
            break;

        default:
            break;
    }

    return *this;
}

void Entry::Display()
{
    //code
    cout << "\n";
    if(type == Tag::number)
        cout << "The object of class Entry has integer = " << i << endl;
    else if(type == Tag::text)
        cout << "The object of class Entry has string = " << s << endl;
    else
        cout << "Object is not initialized" << endl;
}

Entry::~Entry()
{
    //code
    if(type == Tag::text)
        s.~string();                //explicit destroy
}
