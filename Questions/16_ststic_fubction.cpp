// Write a program to show the method of accessing static private member function.

#include <iostream>
using namespace std;

class MyClass
{
    static void Private_Function() // This is ststic function
    {
        cout << "Private static function called" << endl;
    }

public:
    void Calling_Private_Function()
    {
        Private_Function(); // Accessing private static function from a public member function
    }
};

int main()
{
    MyClass obj;
    obj.Calling_Private_Function(); // Call the private static function

    return 0;
}
