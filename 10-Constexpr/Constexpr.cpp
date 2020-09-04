//headers
#include <iostream>
using namespace std;

constexpr int GCD(int a, int b)
{
    //variable declaration
    int temp = 0;

    //code
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return (a);
}

//main()
int main(void)
{
    //code
    constexpr int i = GCD(6, 9);            //evaluated at compile-time
    int j = GCD(4, 8);                      //evaluated at run-time

    cout << "\n";
    cout << "Greatest common divisor of 6 and 9 is : " <<  i << endl;
    cout << "Greatest common divisor of 4 and 8 is : " <<  j << endl;

    return (0);
}


