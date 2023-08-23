// This is a simple demonstration of multilevel inheritance

#include <iostream>
using namespace std;

// First class
class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int r_n);
    void get_roll_no();
};

void student::set_roll_no(int r_n)
{
    roll_no = r_n;
}

void student::get_roll_no()
{
    cout << "The roll number is: " << roll_no << endl;
}

// Second class
class exam : public student
{
protected:
    int cpp;
    int java;

public:
    void set_marks(float c, float j);
    void get_marks();
};

void exam::set_marks(float c, float j)
{
    cpp = c;
    java = j;
}

void exam::get_marks()
{
    cout << "The marks of cpp is: " << cpp << endl;
    cout << "The marks of java is: " << java << endl;
}

// Third class
class result : public exam
{
    float per;

public:
    void display();
};

void result::display()
{
    get_roll_no();
    get_marks();
    cout << "Your percentage is: " << (cpp + java) / 2 << endl;
}

// [ student ---> exam ---> result ] // Multilevel Inheritance

// Main function
int main()
{
    result Azim;

    Azim.set_roll_no(25);
    Azim.set_marks(99.56, 98.57);
    Azim.display();

    return 0;
}