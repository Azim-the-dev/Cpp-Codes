#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        int a;
        cout << "Constructor called" << endl;
    }

    ~MyClass()
    {
        int a;
        cout << "Destructor called" << endl;
    }
};

int main()
{
    cout << "Creating an object" << endl;
    MyClass obj;

    cout << "Exiting the main function" << endl;
    return 0;
}
