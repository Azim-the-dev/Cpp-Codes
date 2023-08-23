// Write a program to perform multiple inheritance.

#include <iostream>
using namespace std;

// Base class1
class Azim1
{
protected:
    int data1;

public:
    void set_data1(int data1)
    {
        this->data1 = data1;
    }
};

// Base class2
class Azim2
{
protected:
    int data2;

public:
    void set_data2(int data2)
    {
        this->data2 = data2;
    }
};

// Derived class
class Azim3 : public Azim1, public Azim2
{
public:
    int sum()
    {
        return (data1 + data2);
    }
};

// [Azim1]--->
//             >----[Azim3] // Multiple Inheritance
// [Azim2]--->

int main()
{
    Azim3 A1;
    int data1, data2;

    cout << "Enter number for data1: ";
    cin >> data1;

    cout << "Enter number for data2: ";
    cin >> data2;

    A1.set_data1(data1);
    A1.set_data2(data2);

    cout << "The sum of data1 and data2 is: " << A1.sum() << endl;

    return 0;
}