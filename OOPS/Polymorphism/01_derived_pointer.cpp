// IDK What this progarm do, May be Poli... (JS_KG)

#include <iostream>
using namespace std;

// Base class
class BaseClass
{
    int Data1;

public:
    void set_data(int Data1)
    {
        this->Data1 = Data1; // this keyword
    }

    void show_data()
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
    BaseClass *B_C_Ptr;
    BaseClass Obj_Base;
    Derived Obj_Derived;

    B_C_Ptr = &Obj_Derived; // Bseclass pointer can be pointed to derived class. Due to late bindinh
    // But functions are clled of base class

    B_C_Ptr->set_data(1);
    B_C_Ptr->show_data(); // This is base class base class function

    return 0;
}