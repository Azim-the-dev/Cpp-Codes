// This program demonstrates the use of a class.

#include <iostream>
using namespace std;

class my_data
{
private:
    int a, b, c; // these are privet varible,

public:
    int d, e;

    void set_data(int a1, int b1, int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }

    void show_data()
    {
        cout << "The value of a is⏩: " << a << endl;
        cout << "The value of b is⏩: " << b << endl;
        cout << "The value of c is⏩: " << c << endl;
        cout << "The value of d is⏩: " << d << endl;
        cout << "The value of e is⏩: " << e << endl;
    }
};

int main()
{
    my_data azim;

    azim.d = 4;
    azim.e = 5;

    azim.set_data(1, 2, 3);
    azim.show_data();

    return 0;
}