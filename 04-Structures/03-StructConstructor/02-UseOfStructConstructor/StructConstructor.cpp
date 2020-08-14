//headers
#include <iostream>
using namespace std;

//defining struct Address
struct Address
{
    string  name;
    int     number;
    string  street;
    string  town;
    char    state[2];

    //struct constructor
    //struct constructors are used to change default ordering 
    //of struct elements or validate, modify arguments
    Address(const string n, 
        const string& s, 
        const string& t, 
        const string& st, 
        int num);
};


//main() - entry point function
int main(void)
{
    //variable delcaration
    //Address yp;               //error: no default constructors

    Address yp( 
        "Yash Patel",
        "Jersey Street",
        "New Providenxe",
        {'R', 'J'},
        42 
    );
   
    //code
    //display above struct
    cout << "\n";
    cout << "Struct Address yp : \n";
    cout << "Name    : " << yp.name << endl;
    cout << "Number  : " << yp.number << endl;
    cout << "Street  : " << yp.street << endl;
    cout << "Town    : " << yp.town << endl;
    cout << "State   : " << yp.state[0] << yp.state[1] << endl;
    cout << "\n";

    return (0);
}

Address::Address(const string n, const string& s, const string& t, const string& st, int num) 
        : name {n}, 
          street {s},
          town {t},
          number {num}
{
    state[0] = st[0];
    state[1] = st[1];
}


