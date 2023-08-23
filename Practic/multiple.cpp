// This is Multiple Inheritance

#include <iostream>
using namespace std;

class azim
{
protected:
    int a;

public:
    void set_a(int x)
    {
        a = x;
    }
};

class azim2
{
protected:
    int b;

public:
    void set_b(int y)
    {
        b = y;
    }
};

class azim3 : public azim, public azim2
{
public:
    void sum()
    {
        cout << "The sum of a and b is: " << a + b << endl;
    }
};

int main()
{
    azim3 obj;

    obj.set_a(2);
    obj.set_b(2);
    obj.sum();

    return 0;
}