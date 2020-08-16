//headers
#include <iostream>
using namespace std;

//union is a struct in which all members are allocated at the same address 
//so that union occupies only as much space as its largest member
//defining union
union Value1
{
    double  d;
    int     i;
    float   f;
    char    ch;
};

union Value2
{
    int i;
    char c;
};

//main() - entry point function
int main(void)
{
    //code
    cout << "\n";
    cout << "Size of union is the size of its largest element" << endl;
    cout << "Size of union Value1 : " << sizeof(Value1) << endl;
    cout << "Size of union Value2 : " << sizeof(Value2) << endl;
    cout << "\n";

    return (0);
}
