//headers
#include <iostream>
using namespace std;

//defining type Address
struct Address
{
    string  name;
    int     number;
    string  street;
    string  town;
    char    state[2];
    string  zip;
};

//main() - entry point function
int main(void)
{
    //function prototypes
    void InitAddress(Address&);
    void DisplayAddress(const Address&);

    //variable declaration
    Address yp;             //yp is variable of type Address

    //code
    //passing address of yp to functions
    InitAddress(yp);
    DisplayAddress(yp);

    return (0);
}

void InitAddress(Address& addr)
{
    //code
    addr.name = "Yash Patel";
    addr.number = 41;
    addr.street = "Vinci St";
    addr.town = "New Providence";
    addr.state[0] = 'N';
    addr.state[1] = 'J';
    addr.zip = "08754";
}

void DisplayAddress(const Address& addr)
{
    //code
    cout << "\n";
    cout << "Struct Address yp : \n";
    cout << "Name    : " << addr.name << endl;
    cout << "Number  : " << addr.number << endl;
    cout << "Street  : " << addr.street << endl;
    cout << "Town    : " << addr.town << endl;
    cout << "State   : " << addr.state[0] << addr.state[1] << endl;
    cout << "Zip     : " << addr.zip << endl;
    cout << "\n";
}
