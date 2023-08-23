// This program is all about Objects Array in Cpp

#include <iostream>
using namespace std;

class employee
{
private:
    int ID;
    int salary;

public:
    void set_ID()
    {
        salary = 1000;
        cout << "Enter the ID of employee: ";
        cin >> ID;
    }
    void get_ID()
    {
        cout << "The ID of this employee is: " << ID << endl;
    }
};

int main()
{
    // employee azim, aziz, aryan, alam; //....

    // azim.set_ID();
    // azim.get_ID(); //....

    employee NFD[5]; // Array of object

    for (int i = 0; i < 5; i++)
    {
        NFD[i].set_ID();
        NFD[i].get_ID();
        cout << endl;
    }

    return 0;
}

// CWH 25.07:31 //