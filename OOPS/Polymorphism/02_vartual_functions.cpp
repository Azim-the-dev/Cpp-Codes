// This program is about virtual functions

#include <iostream>
using namespace std;

// Base class
class BaseClass
{
    int Data1;

public:
    virtual void set_data(int Data1)
    {
        this->Data1 = Data1; // this keyword
    }

    virtual void show_data()
    {
        cout << "The value of 'Data1' is: " << Data1 << endl;
    }
};

// Derived class
class Derived : public BaseClass
{
    int Data2;

public:
    void set_data(int Data2)
    {
        this->Data2 = Data2; // this keyword
    }

    void show_data()
    {
        cout << "The value of 'Data2' is: " << Data2 << endl;
    }
};

int main()
{
    BaseClass *B_Ptr;
    BaseClass B_obj;
    Derived D_obj;

    B_Ptr = &D_obj;

    B_Ptr->set_data(1);
    B_Ptr->show_data(); // Running Derived class member

    return 0;
}