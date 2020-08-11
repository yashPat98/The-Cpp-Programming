//headers
#include <iostream>
using namespace std;


//macros
#define SIZE 6


//main() - Entry point function
int main(void)
{
    //variable declaration
    char ch = 'Y';
    char chArr[SIZE] = { 'Y', 'L', 'D', 'R', 'S', 'E' };
    char *chPtr = nullptr;

    chPtr = &ch;

    cout << "\n\n";
    cout << "Value of ch is : " << *chPtr << "\n\n";

    chPtr = chArr;       //i.e chPtr = &chArr[0]

    for(int i = 0; i < SIZE; i++)
        cout << "Value of chArr[" << i << "] = " << *(chPtr + i) << "\n";

    chPtr = nullptr;

    return (0);
}
