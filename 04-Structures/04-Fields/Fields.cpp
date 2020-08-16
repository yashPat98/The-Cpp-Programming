//headers
#include <iostream>
using namespace std;

//defining type PPN (Physical Page Number)
struct PPN
{   
    unsigned int PFN : 22;              //page frame number
    int : 3;                            //unused
    unsigned int CCA : 3;               //cache coherency algorithm
    bool nonreachable : 1;
    bool dirty : 1;
    bool valid : 1;
    bool global : 1;
};   

//main() - entry point function
int main(void)
{
    //variable declaration
    PPN pgNum;

    //code
    pgNum.PFN = 450;
    pgNum.CCA = 4;
    pgNum.nonreachable = 0;
    pgNum.dirty = 0;
    pgNum.valid = 1;
    pgNum.global = 0;

    cout << "\n";
    cout << "struct PPN" << endl;
    cout << "pgNum.PFN           : " << pgNum.PFN << endl;
    cout << "pgNum.CCA           : " << pgNum.CCA << endl;
    cout << "pgNum.nonreachable  : " << pgNum.nonreachable << endl;
    cout << "pgNum.dirty         : " << pgNum.dirty << endl;
    cout << "pgNum.valid         : " << pgNum.valid << endl;
    cout << "pgNum.global        : " << pgNum.global << endl;
    cout << "Size of struct PPN  : " << sizeof(struct PPN) << endl;
    cout << "\n";

    return (0);
}

