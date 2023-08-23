// This Program is all about Static int in Class

#include <iostream>
using namespace std;

class Employee
{
private:
    int ID;
    static int count; // static int count = 100;--> Can not change Here.
                     // You have to set value out of class

public:
    void set_data()
    {
        cout << "Enter the ID⏩ ";
        cin >> ID;
        count++;
    }
    void get_data()
    {
        cout << "Emloyee NO " << count << " ID is ⏩ " << ID << endl;
    }
};

int Employee ::count; // Static int shout be delclared out of class.
                     // By deafult the value of static int is 0

int main()
{
    Employee Azim, Azim1, Azim2;

    Azim.set_data();
    Azim.get_data();

    Azim1.set_data();
    Azim1.get_data();

    Azim2.set_data();
    Azim2.get_data();

    return 0;
}