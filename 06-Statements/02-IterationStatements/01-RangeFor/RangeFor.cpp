//headers
#include <iostream>
#include <vector>
using namespace std;

//main() - entry point function
int main(void)
{
    //function declaration
    int add_vec(vector<int>& v);
    int add_vec2(vector<int>& v);
    void inc_vec(vector<int>& v);

    //variable declaration
    vector<int> vec;
    int sum;

    //code
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(10);

    sum = add_vec(vec);
    cout << "\n";
    cout << "The sum of integer vector is : " << sum << endl;

    inc_vec(vec);

    sum = add_vec2(vec);
    cout << "\n";
    cout << "The sum of integer vector after increment is : " << sum << endl;

    return (0);
}

int add_vec(vector<int>& v)
{
    //variable declaration
    int sum = 0;

    //code
    for(int x : v)
        sum += x;

    return (sum);
}

int add_vec2(vector<int>& v)
{
    //variable declaration
    int sum = 0;

    //code
    for(auto p = begin(v); p != end(v); ++p)
        sum += *p;

    return (sum);
}

void inc_vec(vector<int>& v)
{    
    //code
    for(int& x : v)
        ++x;
}