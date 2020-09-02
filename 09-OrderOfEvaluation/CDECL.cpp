//headers
#include <iostream>
using namespace std;

//main()
int main(void)
{
    //function prototypes
    void __cdecl CallingConvention(int i, int j);

    //variable declaration
    int i = 5;

    //code
    //parameter calling convention right to left
    CallingConvention(i, ++i);             

    return (0);
}

void __cdecl CallingConvention(int i, int j)
{
    //code
    cout << "Result is " << i + j << endl;
}
