//headers
#include <iostream>
using namespace std;

//main() - entry point function
int main(void)
{
    //variable declaration
    int side1, side2, side3;

    //code
    cout << "\n";
    cout << "Enter the sides of triangle to check the type of triangle." << endl;
    cout << "\nFirst side : " << endl;
    cin >> static_cast<int>(side1);

    cout << "\nSecond side : " << endl;
    cin >> static_cast<int>(side2);

    cout << "\nThird side : " << endl;
    cin >> static_cast<int>(side3);

    if(side1 == side2 && side2 == side3)                            //condition
    {
        cout << "\nIt is equilateral triangle" << endl;             //statement
    }
    else if(side1 == side2 || side2 == side3 || side3 == side1)     //condition
    {
        cout << "\nIt is isosceles triangle" << endl;               //statement
    } 
    else 
    {
        cout << "\nIt is scalene triangle" << endl;                 //statement
    }

    return (0);
}
