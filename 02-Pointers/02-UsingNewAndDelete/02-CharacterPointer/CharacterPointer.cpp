//headers
#include <iostream>
using namespace std;


//macros
#define SIZE 6


//main() - Entry point function
int main(void)
{
    //variable declaration
    char *chPtr = nullptr;
    char *chArrPtr = nullptr;

    //using new to allocate memory
    chPtr = new char{ 'Y' };
    chArrPtr = new char[SIZE];

    chArrPtr[0] = 'Y';
    chArrPtr[1] = 'A';
    chArrPtr[2] = 'T';
    chArrPtr[3] = 'L';
    chArrPtr[4] = 'R';
    chArrPtr[5] = 'S'; 

    cout << "\n\n";
    cout << "Value at chPtr is : " << *chPtr << "\n\n";

    for(int i = 0; i < SIZE; i++)
        cout << "Value at (chArrPtr + " << i << ") = " << *(chArrPtr + i) << "\n";

    //deleting allocated memory
    if(chPtr)
    {
        delete (chPtr);
        chPtr = nullptr;
    }

    if(chArrPtr)
    {
        delete (chArrPtr);
        chArrPtr = nullptr;
    }

    return (0);
}
