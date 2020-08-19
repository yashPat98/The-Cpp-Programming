//headers
#include <iostream>
using namespace std;

//main()- entry point function
int main(void)
{
    //variable declaration
    int angle1, angle2, angle3, sum;

    //code
    cout << "\n";
    cout << "Enter the angles of triangle to check if it is valid triangle." << endl;
    cout << "\nFirst angle : " << endl;
    cin >> static_cast<int>(angle1);

    cout << "\nSecond angle : " << endl;
    cin >> static_cast<int>(angle2);

    cout << "\nThird angle : " << endl;
    cin >> static_cast<int>(angle3);

    //if sum of all three angles of triangle
    //is 180 then it is a valid triangle 
    sum = angle1 + angle2 + angle3;

    if(sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)            //condition
    {
        cout <<"\nIt is a valid triangle." << endl;                     //statement
    }
    else
    {
        cout << "\nIt is invalid triangle." << endl;                    //statement
    }

    return (0);
}
