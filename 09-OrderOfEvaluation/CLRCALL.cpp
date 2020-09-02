//headers
#include <iostream>
using namespace std;

//main()
int main(void)
{
    //function prototypes
    void __clrcall CallingConvention(int i, int j);

    //variable declaration
    int i = 5;

    //code
    //parameters calling convention left to right
    CallingConvention(i, ++i);             

    return (0);
}

void __clrcall CallingConvention(int i, int j)
{
    //code
    cout << "Result is " << i + j << endl;
}
