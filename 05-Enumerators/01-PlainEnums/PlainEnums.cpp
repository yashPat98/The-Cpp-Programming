//headers
#include <iostream>
using namespace std;

enum Traffic_light
{
    red,                //default value = 0
    yellow,             //value = 1
    green               //value = 2
};

//enumerators present in enum Warning has some name clashes
//and are not allowed.
/*
enum Warning
{
    green,
    yellow,
    orange,
    red
};
*/

//main() - entry point function
int main(void)
{
    //variable declaration
    int signal;

    //code
    cout << "\n";
    
    //implicit conversion to integers
    signal = red;
    cout << "Stop ! red signal." << endl;

    signal = yellow;
    cout << "Slow down ! yellow signal." << endl;

    signal = green;
    cout << "Go !!! green signal." << endl;

    cout << "\n";
 
    return (0);
}
