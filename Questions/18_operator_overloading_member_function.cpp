// Write a program to perform ++ operator overloading using member function.

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

    void operator++()
    {
        value = value + 10;
    }

    void Display()
    {
        cout << "The value is: " << value << endl;
    }
};

int main()
{
    Increase Inc;

    ++Inc;
    Inc.Display();

    return 0;
}