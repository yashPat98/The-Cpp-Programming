//headers
#include <iostream>
using namespace std;

//union is a struct in which all members are allocated at the same address 
//so that union occupies only as much space as its largest member
//defining union
union Value
{
    double  d;
    int     i;
    float   f;
    char    ch;
};

//main() - entry point function
int main(void)
{
    //variable declaration
    Value myVal;

    //code
    cout << "\n";

    //use only one variable at a time for union

    myVal.ch = 'R';
    cout << "myVal.ch : " << myVal.ch << endl;

    myVal.i = 45;
    cout << "myVal.i : " << myVal.i << endl;

    myVal.f = 3.99f;
    cout << "myVal.f : " << myVal.f << endl;

    myVal.d = 4.55555;
    cout << "myVal.d : " << myVal.d << endl;

    cout << "\n";

    return (0);
}
