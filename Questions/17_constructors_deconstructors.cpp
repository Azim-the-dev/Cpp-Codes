// Write a program to show the ways of calling constructors and destructors.

#include <iostream>
using namespace std;

class MyClass
{
    int num;

public:
    MyClass()
    {
        num = 0;
        cout << "Constructor called." << endl;
    }

    ~MyClass()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    cout << "Creating an object:" << endl;
    MyClass obj; // Constructor is called when an object is created

    cout << "Exiting the program:" << endl;
    return 0; // Destructor is called when the program exits
}