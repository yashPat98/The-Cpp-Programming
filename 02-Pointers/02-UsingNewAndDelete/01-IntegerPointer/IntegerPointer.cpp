//headers
#include <iostream>
using namespace std;


//macros
#define SIZE 6


//main() - Entry point function
int main(void)
{
    //variable declaration
    int *iNumPtr = nullptr;
    int *iArrPtr = nullptr;

    //using new to allocate memory
    iNumPtr = new int{ 45 };
    iArrPtr = new int[SIZE];

    iArrPtr[0] = 11;
    iArrPtr[1] = 12;
    iArrPtr[2] = 13;
    iArrPtr[3] = 14;
    iArrPtr[4] = 15;
    iArrPtr[5] = 16; 

    cout << "\n\n";
    cout << "Value at iNumPtr is : " << *iNumPtr << "\n\n";

    for(int i = 0; i < SIZE; i++)
        cout << "Value at (iArr + " << i << ") = " << *(iArrPtr + i) << "\n";

    //deleting allocated memory
    if(iNumPtr)
    {
        delete (iNumPtr);
        iNumPtr = nullptr;
    }

    if(iArrPtr)
    {
        delete (iArrPtr);
        iArrPtr = nullptr;
    }

    return (0);
}
