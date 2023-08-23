// This program is about Multiple Inheritance

#include <iostream>
using namespace std;

// Class 1
class base1
{
protected:
    int Data1;

public:
    void set_Data1(int D1)
    {
        Data1 = D1;
    }
};

// Class 2
class base2
{
protected:
    int Data2;

public:
    void set_Data2(int D2)
    {
        Data2 = D2;
    }
};

// Class 3
class derived : public base1, public base2
{
private:
    // int sum = Data1 + Data2; // This is a wrong way of setting sum
    // If you set sum like this you will get sum = 0
    // Because it is calculated during the object construction time

public:
    void Display()
    {
        cout << "Data 1 is: " << Data1 << endl;
        cout << "Data 2 is: " << Data2 << endl;
        cout << "Sum of Data1 and Data2 is: " << Data1 + Data2 << endl;
    }
};

// [base1]--->
//             >----[derived] // Multiple Inheritance
// [base2]--->

// Main function
int main()
{
    derived Azim;

    Azim.set_Data1(10);
    Azim.set_Data2(20);
    Azim.Display();

    return 0;
}