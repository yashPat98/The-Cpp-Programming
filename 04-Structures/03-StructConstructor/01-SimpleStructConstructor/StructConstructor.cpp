//headers
#include <iostream>
using namespace std;

//defining type Point
struct Point
{
    int x, y;

    Point(void)
    {
        x = 0;
        y = 0;
    }

    //constructor with one parameter
    Point(int i)
    {
        x = i;
        y = 0;
    }

    //constructor with two parameters
    Point(int i, int j)
    {
        x = i;
        y = j;
    }
};

//main() - entry point function
int main(void)
{
    //variable delcaration
    Point p0;               //default constructor
    Point p1 {};            //default constructor 
    Point p2 {2};           //constructor with int parameter
    Point p3 {2, 4};        //constructor with two int parameters

    //code 
    cout << "\n";
    cout << "Point p0.x = " << p0.x << " p0.y = " << p0.y << endl;
    cout << "Point p1.x = " << p1.x << " p1.y = " << p1.y << endl;
    cout << "Point p2.x = " << p2.x << " p2.y = " << p2.y << endl;
    cout << "Point p3.x = " << p3.x << " p3.y = " << p3.y << endl;
    cout << "\n";

    return (0);
}
