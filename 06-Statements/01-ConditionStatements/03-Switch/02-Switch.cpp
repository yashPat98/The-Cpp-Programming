//headers
#include <iostream>
using namespace std;

//enumerator class
enum class Traffic_Lights
{
    red,
    green,
    yellow
};

//main() - entry point function
int main(void)
{
    //variable declaration
    Traffic_Lights tLight;

    //code
    cout << "\n";
    tLight = Traffic_Lights::red;

    switch(tLight)
    {
        case Traffic_Lights::green:
            cout << "Traffic light is green.\n";
            break;
        
        case Traffic_Lights::yellow:
            cout << "Traffic light is yellow.\n";
            break;

        case Traffic_Lights::red:
            cout << "Traffic light is red.\n";
            break;

        default:
            break;
    }

    return (0);
}

