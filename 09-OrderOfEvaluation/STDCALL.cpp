//headers
#include <iostream>
using namespace std;

//main()
int main(void)
{
    //function prototypes
    void __stdcall CallingConvention(int i, int j);

    //variable declaration
    int i = 5;
    int j = 8;

    //code
    //standard win32 calling convention
    CallingConvention(i, j);             

    return (0);
}

void __stdcall CallingConvention(int i, int j)
{
    //code
    cout << "Result is " << i + j << endl;
}
