// This program is about Single Inheritance

#include <iostream>
using namespace std;

// Class 1
class base
{
    int Data1; // Private by deafult and is is not inheritable

public:
    int Data2;

    void set_data();
    int get_data1();
    int get_data2();
};

void base::set_data()
{
    Data1 = 10;
    Data2 = 20;
}

int base::get_data1()
{
    return Data1;
}

int base::get_data2()
{
    return Data2;
}

// Class 2
class derived : public base // Class is being derived publically
// If the class is private then i can not acess any base class's (public) memeber or functions in main function
// But i can acess those (public memeber or functions) in derived class
// Private members or functions of base class are can not inherited

{
    int Data3; // Private by deafult

public:
    void process();
    void display();
};

void derived::process()
{
    Data3 = Data2 * get_data1(); // Derived class can not directly acess Data1 beacause Data1 is private in base class
}

void derived::display()
{
    cout << "The value of Data1 is: " << get_data1() << endl; // Same...
    cout << "The value of Data2 is: " << Data2 << endl;
    cout << "The value of Data3 is: " << Data3 << endl;
}

// [ base ---> derived ] // Single Inheritance

// Main function
int main()
{
    derived A;

    A.set_data();
    A.process();
    A.display();

    return 0;
}