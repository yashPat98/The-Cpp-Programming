//headers
#include <iostream>
using namespace std;


int main(void)
{
    //variable declaration
    //boolean
    bool           bFlag;
    
    //character
    char           ch;
    signed char    sch;
    unsigned char  uch;
    wchar_t        wch;         //it is type cast of short

    //integers
    short          s;
    int            i;
    long           l;
    long long      ll;

    //float
    float          f;
    double         d;
    long double    ld;

    //code

    //variable initialization
    bFlag = true;

    ch = 'Y';
    sch = 'Y';
    uch = 'Y';
    wch = 'Y';          

    s = 45;
    i = 355;
    l = 123456789;
    ll = 123456789;

    f = 3.9f;
    d = 34.6534774;
    ld = 2.998877667;


    //displaying values
    cout << "\nBoolean :\n";
    cout << "bool bFlag        = " << bFlag << endl;
    
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


    return (0);
}