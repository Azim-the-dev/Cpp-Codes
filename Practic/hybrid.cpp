// Hierarchical Inheritance

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void setName(string n)
    {
        name = n;
    }

    void displayName()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
public:
    void displayRole()
    {
        cout << "Role: Student" << endl;
    }
};

class Teacher : public Person
{
public:
    void displayRole()
    {
        cout << "Role: Teacher" << endl;
    }
};

int main()
{
    Student student;
    student.setName("Alice");
    student.displayName();
    student.displayRole();

    Teacher teacher;
    teacher.setName("Mr. Smith");
    teacher.displayName();
    teacher.displayRole();

    return 0;
}
