//headers 
#include <iostream>
#include <vector>
using namespace std;

//main() - entry point function
int main(void)
{
    //variable declaration
    std::vector<int> v;

    //code
    cout << "\n";

    v.push_back(4);
    v.push_back(10);
    v.push_back(12);
    v.push_back(3);

    std::vector<int>::iterator i = v.begin();

    cout << "Vector v :- \n";
    while(i != v.end())
    {
        cout << "Element : " << *i << endl;
        i++;
    }

    return (0);
}
