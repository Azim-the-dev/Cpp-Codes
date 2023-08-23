// This program is about this pointr

#include <iostream>
using namespace std;

class Num
{
    int Data;

public:
    void set_data(int Data)
    {
        this->Data = Data; // this keyword
    }

    void show_data()
    {
        cout << "The value of 'Data' is: " << Data << endl;
    }
};

int main()
{
    Num A1;

    A1.set_data(666);
    A1.show_data();

    return 0;
}

// CWH 53 -> 05:00