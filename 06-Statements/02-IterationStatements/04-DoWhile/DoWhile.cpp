//headers
#include <iostream>
#include <vector>
using namespace std;

//main() - entry point function
int main(void)
{
    //variable declaration
    std::vector<int> v;
    std::vector<int>::iterator i;
    int num;
    char ch;

    //code
    cout << "\n";

    do
    {
        cout << "Insert Element in vector " << endl;
        cin >> num;
        v.push_back(num);
        
        cout << "Do you want to insert more elements ? (Y/N) " << endl;
        cin >> ch;
    }
    while(ch == 'Y' || ch == 'y');

    i = v.begin();
    cout << "\n";
    cout << "The vector contain : " << endl;
    while(i != v.end())
    {
        cout << "Element : " << *i << endl;
        i++;
    }


    return (0); 
}
