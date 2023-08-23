#include <iostream>
using namespace std;

struct azim
{
    int num;
    float fnum;
};

union azzim
{
    int num;
    float fnum;
};

int main()
{
    struct azim A1;

    A1.num = 100;
    A1.fnum = 100.99;

    cout<<A1.num<<endl<<A1.fnum<<endl;

    union azzim A2;

    A2.num = 100;
    A2.fnum = 100.99;

    cout<<A1.num<<endl<<A1.fnum<<endl;

    return 0;
}