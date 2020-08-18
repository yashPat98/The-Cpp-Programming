//headers
#include <iostream>
using namespace std;

//enumerators for traffic light
//default underlying type is int
enum class Traffic_light
{
    red,
    yellow,
    green
};

//no name clashes for enum classes 
//enumerators for fire alert
//underlying type is char
enum class Warning : char
{
    green,
    yellow,
    orange,
    red
};

//main() - entry point function
int main(void)
{
    //function prototypes
    void ShowSignal(Traffic_light t);
    void ShowWarning(Warning w);

    //variable declaration
    Traffic_light trafficSig;       //default value will not be set
    Warning fireSig;                //default value will be first enumerator

    //code
    cout << "\n";

    cout << "\n";
    cout << "Default values of variables of enum classes" << endl;
    ShowSignal(trafficSig);
    ShowWarning(fireSig);

    //no implicit int conversions
    trafficSig = Traffic_light::red;
    fireSig = Warning::orange;

    cout << "\n";
    cout << "Values of variables of enum classes after initialization" << endl;
    ShowSignal(trafficSig);
    ShowWarning(fireSig);

    cout << "\n";
    cout << "Values of enumerators in enum class Traffic_light" << endl;
    cout << "Traffic_light::red    : " << static_cast<int>(Traffic_light::red) << endl;
    cout << "Traffic_light::yellow : " << static_cast<int>(Traffic_light::yellow) << endl;
    cout << "Traffic_light::green  : " << static_cast<int>(Traffic_light::green) << endl;

    cout << "\n";
    cout << "Values of enumerators in enum class Warning" << endl;
    cout << "Warning::green        : " << static_cast<int>(Warning::green) << endl;
    cout << "Warning::yellow       : " << static_cast<int>(Warning::yellow) << endl;
    cout << "Warning::orange       : " << static_cast<int>(Warning::orange) << endl;
    cout << "Warning::red          : " << static_cast<int>(Warning::red) << endl;

    return (0);
}

void ShowSignal(Traffic_light t)
{
    //code
    if(t == Traffic_light::red)
        cout << "Stop ! red signal" << endl;
    else if(t == Traffic_light::yellow)
        cout << "Slow down ! yellow signal" << endl;
    else if(t == Traffic_light::green)
        cout << "Go !!! green signal" << endl;
    else
        cout << "Traffic light is off" << endl;
}

void ShowWarning(Warning w)
{
    //code
    switch(w)
    {
        case Warning::green:
            cout << "Fire alert : green" << endl;
            break;

        case Warning::yellow:
            cout << "Fire alert : yellow" << endl;
            break;

        case Warning::orange:
            cout << "Fire alert : orange" << endl;
            break;

        case Warning::red:
            cout << "Fire alert : red" << endl;
            break;
        
        default:
            cout << "Fire alert system is off" << endl;
            break;
    }
}
