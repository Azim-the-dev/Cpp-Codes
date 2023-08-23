// Thi sprogarm is about Parametrized constructor

#include <iostream>
using namespace std;

class azim
{
private:
    int a, b;

public:
    azim(int x, int y); // Parametrized constructor

    void show_data()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

azim ::azim(int x, int y) // ---> This is a Parametrized constructor as it takes paramet
{
    a = x;
    b = y;
}

int main()
{
    azim A1(2, 4); // Implicit call
    A1.show_data();

    cout << endl; // ...

    azim A2 = azim(6, 8); // Explicit call
    A2.show_data();

    return 0;
}