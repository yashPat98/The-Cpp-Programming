//headers
#include <iostream>
using namespace std;

//defining type address 
struct Address
{
    const char*  name;
    int          number;
    const char*  street;
    const char*  town;
    char         state[2];
    const char*  zip;
};

//main() - entry point function
int main(void)
{
    //variable declaration
    //inline initializing type Address
    Address yp = {
        "Yash Patel",
        42,
        "Vinci St",
        "New Providence",
        {'N', 'J'},
        "07825"
    };

    //code
    //display above struct
    cout << "\n";
    cout << "Struct Address yp : \n";
    cout << "Name    : " << yp.name << endl;
    cout << "Number  : " << yp.number << endl;
    cout << "Street  : " << yp.street << endl;
    cout << "Town    : " << yp.town << endl;
    cout << "State   : " << yp.state[0] << yp.state[1] << endl;
    cout << "Zip     : " << yp.zip << endl;
    cout << "\n";

    return (0);
}