// Thi sprogarm is about constructor overloading

#include <iostream>
using namespace std;

class azim
{
private:
    int a, b;

public:
    azim(int x, int y) // Oveloading ...
    {
        a = x;
        b = y;
    }

    azim(int x) // Oveloading ...
    {
        a = x;
        b = 0;
    }

    void show_data()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    azim A1(2, 4);
    A1.show_data();

    cout << endl; // ...

    azim A2(7);
    A2.show_data();

    return 0;
}

// Constructor overloading is like function overloading.