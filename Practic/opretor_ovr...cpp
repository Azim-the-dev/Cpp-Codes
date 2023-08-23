#include <iostream>
using namespace std;

class num
{
    int a = 99;

public:
    int operator++()
    {
        a = a + 1;

        return a;
    }

    void display()
    {
        cout << a << endl;
    }
};

int main()
{
    num a;

    ++a;
    a.display();

    return false;
}