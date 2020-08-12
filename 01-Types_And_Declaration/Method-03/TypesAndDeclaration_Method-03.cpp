//headers
#include <iostream>
using namespace std;


int main(void)
{
    //variable declaration and inline initialization
    //boolean
    bool           bFlag {true};
    
    //character
    char           ch {'Y'};
    signed char    sch {'Y'};
    unsigned char  uch {'Y'};
    wchar_t        wch {'Y'};         //it is type cast of short

    //integers
    short          s {45};
    int            i {355};
    long           l {123456789};
    long long      ll {123456789};

    //float
    float          f {3.9f};
    double         d {34.6534774};
    long double    ld {2.998877667};

    string         name {"Yash"};

    //code

    //displaying values
    cout << "\nBoolean :\n";
    cout << "bool bFlag         = " << bFlag << endl;
    
    cout << "\nCharacters :\n";
    cout << "char ch            = " << ch << endl;
    cout << "signed char sch    = " << sch << endl;
    cout << "unsigned char uch  = " << uch << endl;
    cout << "wide char wch      = " << (char)wch << endl;

    cout << "\nIntegers :\n";
    cout << "short int s        = " << s << endl;
    cout << "int i              = " << i << endl;
    cout << "long int l         = " << l << endl;
    cout << "long long ll       = " << ll << endl;

    cout <<"\nFloats :\n";
    cout << "float f            = " << f << endl;
    cout << "double d           = " << d << endl;
    cout << "long double ld     = " << ld << endl; 

    cout << "\nString :\n";
    cout << "string name        = " << name << endl;

    return (0);
}