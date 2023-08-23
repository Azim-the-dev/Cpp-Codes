/*
 * Create the Person class.
 *     Create some objects of this class (by taking information from  the user).
 *     Inherit the class Person to create two classes Teacher and Student class.
 *     Maintain the respective information in the classes and create,
 *     Display and delete  objects of these two classes (Use Runtime Polymorphism).
 */

#include <iostream>
#include <string>
using namespace std;

// Class 1
class Person
{
protected:
    string name;
    int age;

public:
    Person(const string &n, int a) : name(n), age(a) {}

    virtual void displayInfo() const
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    virtual ~Person() {}
};

// Class 2
class Teacher : public Person
{
private:
    string subject;

public:
    Teacher(const string &n, int a, const string &s) : Person(n, a), subject(s) {}

    void displayInfo() const override
    {
        cout << "Teacher - ";
        Person::displayInfo();
        cout << "Subject: " << subject << endl;
    }
};

// Class 3
class Student : public Person
{
private:
    string studentId;

public:
    Student(const string &n, int a, const string &id) : Person(n, a), studentId(id) {}

    void displayInfo() const override
    {
        cout << "Student - ";
        Person::displayInfo();
        cout << "Student ID: " << studentId << endl;
    }
};

int main()
{
    Person *personPtr = new Teacher("Aryan Shaikh", 35, "Cpp");
    Person *studentPtr = new Student("Sk Azim", 18, "22025");

    studentPtr->displayInfo();
    personPtr->displayInfo();

    delete personPtr;
    delete studentPtr;

    return 0;
}