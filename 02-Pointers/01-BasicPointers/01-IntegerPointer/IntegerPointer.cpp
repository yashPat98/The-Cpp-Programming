//headers
#include <iostream>
using namespace std;


//macros
#define SIZE 6


//main() - Entry point function
int main(void)
{
    //variable declaration
    int iNum = 45;
    int iArr[SIZE] = { 11, 12, 13, 14, 15, 16 };
    int *iPtr = nullptr;

    iPtr = &iNum;

    cout << "\n\n";
    cout << "Value of iNum is : " << *iPtr << "\n\n";

    iPtr = iArr;       //i.e iPtr = &iArr[0]

    for(int i = 0; i < SIZE; i++)
        cout << "Value of iArr[" << i << "] = " << *(iPtr + i) << "\n";

    iPtr = nullptr;

    return (0);
}
