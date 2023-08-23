#include <iostream>
using namespace std;

class A
{
    int a = 10;

    friend void azim(A A1);
};

void azim(A A1)
{
    cout << A1.a << endl;
}

int main()
{
    A A1;

    azim(A1);

    return 0;
}