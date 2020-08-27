//headers
#include <iostream>
using namespace std;

#define MAX 4

int main(void)
{
    //variable declaration
    int vec[MAX] = { 4, 5, 9, 6 };
    int sum = 0;

    //code
    for(int i = 0; i < MAX; i++)
        sum += vec[i];

    cout << "\n";
    cout << "The sum of elements of array is : " << sum << endl;

    return (0);
}
