//headers
#include <iostream>
using namespace std;

//main() - entry point function
int main(void)
{
    //variable declaration
    int iTemp {18};
    char chTemp {'Y'};
    float fTemp {2.98f};
    double dTemp {4.5666};
    string strTemp {"Yash"};

    const int& iRef {iTemp};
    const char& chRef {chTemp};
    const float& fRef {fTemp};
    const double& dRef {dTemp};
    const string& sRef {strTemp};

    //code
    //displaying const refrence variables
    cout << "\n";
    cout << "Output : " << endl;
    cout << "const int : " << iRef << endl;
    cout << "const char : " << chRef << endl;
    cout << "const float : " << fRef << endl;
    cout << "const double : " << dRef << endl;
    cout << "const string : " << sRef << endl;

    return (0);
}