// This program is about Inheritance

#include <iostream>
using namespace std;

class Employee // Base class
{
public:
    int ID;
    float Salary;

    Employee() {}
    Employee(int Input)
    {
        ID = Input;
        Salary = 100.00;
    }

    void Show_Employee()
    {
        cout << "ID is: " << ID << endl
             << "Salary is: " << Salary << endl;
    }
};
/* Derived class Syntax 👇
 *
 *   class <<derived_class_name>> : <<visiblity_mode>> <<base_class_name>>
 *   {
 *       // code ...
 *   }
 *
 * Notes:
 *       --> Deafult visiblity mode: is private
 *       --> Private visiblity mode: public members of the base class becomes private members of the derived class
 *       --> Public visiblity mode: public members of the base class becomes public members of the derived class
 *       --> Private members are never inherited
 */

class Programer : Employee // Derived class
{
public:
    int language;

    Programer() {}
    Programer(int Input)
    {
        ID = Input;
        Salary = 100000.00;
        language = 99;
    }

    void Show_Programer()
    {
        cout << "ID is: " << ID << endl
             << "Salary is: " << Salary << endl
             << "Language : " << language << endl;
    }
};

int main()
{
    Employee Aryan(01);

    Aryan.Show_Employee();

    cout << endl;

    Programer Azim(00);

    Azim.Show_Programer();

    return 0;
}