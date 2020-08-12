//headers
#include <iostream>
using namespace std;

//main() - entry point function
int main(void)
{
    //function prototypes
    void swap(int& a, int& b);

    //variable declaration
    int Num1 {10};
    int Num2 {20};

    //swap
    swap(Num1, Num2);

    //display
    cout << "\n";
    cout << "Num1 : " << Num1 << endl;
    cout << "Num2 : " << Num2 << endl;

    return (0);
}

void swap(int &a, int &b)
{
    int temp {static_cast<int&&>(a)};
    a = static_cast<int&&>(b);
    b = static_cast<int&&>(temp);
}