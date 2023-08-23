// The program ia about pointers in class

#include <iostream>
using namespace std;

class Num
{
    int Data;

public:
    void set_data(int D)
    {
        Data = D;
    }

    void show_data()
    {
        cout << "The value of 'Data' is: " << Data << endl;
    }
};

int main()
{
    // Class pointer
    Num A1;
    Num *ptr = &A1; // This pointer is now pointing to A1 object

    // Num *ptr2 = new Num; // This is also valid

    A1.set_data(999);
    // A1.show_data();

    (*ptr).show_data(); // - - - >
    //                             < - - - > Both are works same
    ptr->show_data(); // - - - - >

    return 0;
}