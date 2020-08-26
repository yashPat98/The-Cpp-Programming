//headers
#include <iostream>
using namespace std;

//main() - entry point function
int main(void)
{
    //variable declaration
    int iNum;

    //code
    cout << "\n";
    cout << "Enter a number : \n";
    cin >> iNum;

    switch(iNum > 0)
    {
        case 1:
            cout << "The number is positive.\n";
            break;
        
        case 0:
            switch(iNum < 0)
            {
                case 1:
                    cout << "The number is negative.\n";
                    break;
                
                case 0:
                    cout << "The number is 0.\n";
                    break;
            }
            break;
    }

    return (0);
}

