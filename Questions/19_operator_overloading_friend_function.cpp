// Write a program to perform ++ operator overloading using friend function.

#include <iostream>
using namespace std;

class Increase
{
    int value;

public:
    Increase()
    {
        value = 0;
    }

    friend void operator++(Increase &obj);

    void Display()
    {
        cout << "The value is: " << value << endl;
    }
};

void operator++(Increase &obj)
{
    obj.value = obj.value + 10;
}

int main()
{
    Increase Inc;

    ++Inc;
    Inc.Display();

    return 0;
}