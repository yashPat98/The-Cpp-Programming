//headers
#include <iostream>
using namespace std;

//main()
int main(void)
{
    //function prototypes
    void __fastcall CallingConvention(int i, int j);

    //variable declaration
    int i = 5;
    int j = 8;

    //code
    //parameters are stored in register
    CallingConvention(i, j);             

    return (0);
}

void __fastcall CallingConvention(int i, int j)
{
    //code
    cout << "Result is " << i + j << endl;
}
