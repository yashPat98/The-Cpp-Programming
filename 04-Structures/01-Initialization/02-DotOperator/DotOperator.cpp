//headers
#include <iostream>
using namespace std;

//defining type Address
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
    Address yp;

    //code
    //initializing by dot operator(.)
    yp.name = "Yash Patel";
    yp.number = 41;
    yp.street = "Vinci St";
    yp.town = "New Providence";
    yp.state[0] = 'N';              //arrays cannot be inline initialized here
    yp.state[1] = 'J';
    yp.zip = "07825";

    //display
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