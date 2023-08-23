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

    friend void operator++(Increase &obj); // Declare friend function prototype

    void Display()
    {
        cout << "The value is: " << value << endl;
    }
};

// Define the friend function
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
