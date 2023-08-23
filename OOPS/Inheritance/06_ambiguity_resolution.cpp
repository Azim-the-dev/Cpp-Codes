// This program is about Ambiguity Resolution

#include <iostream>
using namespace std;

// Class 1
class Base1
{
public:
    void greet()
    {
        cout << "How Are You!" << endl;
    }
};

// Class 2
class Base2
{
public:
    void greet()
    {
        cout << "kaise Ho!" << endl;
    }
};

// Class 3
class Derived : public Base1, public Base2
{
public:
    void greet()
    {
        Base1::greet(); // Derived class now use Base1 class 'greet' function
    }
};

int main()
{
    Derived d;
    d.greet();

    return 0;
}

// CWH 53 > 08:50