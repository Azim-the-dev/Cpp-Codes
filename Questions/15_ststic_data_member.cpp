// Write a program to distinguish the properties of static and non-static data members.

#include <iostream>
using namespace std;

class Azim
{
    int num = 0;
    static int static_num;

public:
    void number()
    {
        num++;
        static_num++;

        cout << "This is non static number: " << num << endl;
        cout << "this is non static number: " << static_num << endl;
    }
};

int Azim::static_num = 0;

int main()
{
    Azim object_1;
    cout << "This is object 1: " << endl;

    object_1.number();
    cout << endl;
    object_1.number();
    cout << endl;

    Azim object_2;
    cout << "This is object 2: " << endl;

    object_2.number();
    cout << endl;
    object_2.number();
    cout << endl;

    return 0;
}