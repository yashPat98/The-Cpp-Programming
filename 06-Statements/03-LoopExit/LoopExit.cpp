//headers
#include <iostream>
using namespace std;

//main() - entry point function
int main(void)
{
    //variable declaration
    int i = 0;

    //code
    while(true)
    {
        cout << "\n";
        cout << "Loop exit menu " << endl;
        cout << "1. Break" << endl;
        cout << "2. Return" << endl;
        cout << "3. Continue" << endl;
        cout << "4. Goto" << endl;
        cout << "Choose : " << endl;
        cin >> i;

        switch(i)
        {
            case 1:
                cout << "BREAK !!" << endl;
                break;

            case 2:
                cout << "RETURN !!" << endl;
                return (0);

            case 3:
                cout << "CONTINUE !!" << endl;
                continue;

            case 4:
                cout << "GOTO !!" << endl;
                goto found;
        }

        cout << "Outside switch" << endl;
    }

    found :    
        cout << "Outside loop" << endl;

    return (0);
}

