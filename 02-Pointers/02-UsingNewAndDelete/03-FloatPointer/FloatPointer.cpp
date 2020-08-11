//headers
#include <iostream>
using namespace std;


//macros
#define SIZE 6


//main() - Entry point function
int main(void)
{
    //variable declaration
    float *fNumPtr = nullptr;
    float *fArrPtr = nullptr;

    //using new to allocate memory
    fNumPtr = new float{ 2.998 };
    fArrPtr = new float[SIZE];

    fArrPtr[0] = 1.5;
    fArrPtr[1] = 2.5;
    fArrPtr[2] = 3.5;
    fArrPtr[3] = 4.5;
    fArrPtr[4] = 5.5;
    fArrPtr[5] = 6.5; 

    cout << "\n\n";
    cout << "Value at fNumPtr is : " << *fNumPtr << "\n\n";

    for(int i = 0; i < SIZE; i++)
        cout << "Value at (fArrPtr + " << i << ") = " << *(fArrPtr + i) << "\n";

    //deleting allocated memory
    if(fNumPtr)
    {
        delete (fNumPtr);
        fNumPtr = nullptr;
    }

    if(fArrPtr)
    {
        delete (fArrPtr);
        fArrPtr = nullptr;
    }

    return (0);
}
