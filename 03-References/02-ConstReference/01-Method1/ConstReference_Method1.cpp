//headers
#include <iostream>
using namespace std;

//main() - entry point function
int main(void)
{
    //variable declaration
    const int& iRef {18};
    const char& chRef {'Y'};
    const float& fRef {2.98f};
    const double& dRef {4.5666};
    const string& sRef {"Yash"};

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