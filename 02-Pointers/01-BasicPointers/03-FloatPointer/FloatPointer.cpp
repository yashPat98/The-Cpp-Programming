//headers
#include <iostream>
using namespace std;


//macros
#define SIZE 6


//main() - Entry point function
int main(void)
{
    //variable declaration
    float fNum = 2.998;
    float fArr[SIZE] = { 1.2, 2.2, 3.2, 4.2, 5.2, 6.2 };
    float *fPtr = nullptr;

    fPtr = &fNum;

    cout << "\n\n";
    cout << "Value of fNum is : " << *fPtr << "\n\n";

    fPtr = fArr;       //i.e fPtr = &fArr[0]

    for(int i = 0; i < SIZE; i++)
        cout << "Value of fArr[" << i << "] = " << *(fPtr + i) << "\n";

    fPtr = nullptr;

    return (0);
}
