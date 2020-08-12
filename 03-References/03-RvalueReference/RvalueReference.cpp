//headers
#include <iostream>
using namespace std;

//main() - entry point function
int main(void)
{
    //variable declaration
    //references should always inline initialized 
    int&&    iRef{12};
    char&&   chRef{'Y'};
    float&&  fRef{2.4f};
    double&& dRef{3.999};
    string&& sRef{"Yash"};

    //code
    //using reference for output
    cout << "\n";
    cout << "Output using reference variables" << endl;
    cout << "int : " << iRef << endl;
    cout << "char : " << chRef << endl;
    cout << "float : " << fRef << endl;
    cout << "double : " << dRef << endl;
    cout << "string : " << sRef << endl;

    //reassigning values
    //no operator operates on reference , rather operators are applied to the variable it referes.
    iRef = int {8};
    chRef = char {'R'};
    fRef = float {2.46f};
    dRef = double {3.455};
    sRef = string {"Patel"};

    //using original names for output
    cout << "\n";
    cout << "Output after reassigning reference variables" << endl;
    cout << "int : " << iRef << endl;
    cout << "char : " << chRef << endl;
    cout << "float : " << fRef << endl;
    cout << "double : " << dRef << endl;
    cout << "string : " << sRef << endl;

    return (0);
}