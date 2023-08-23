// The program ia about pointers array in class

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
    int num = 0;
    int size = 5;

    Num *ptr = new Num[size]; // Array pointer class

    Num *P_Temp = ptr;

    for (int i = 0; i < size; i++)
    {
        ptr->set_data(++num);
        // ptr->show_data();
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        P_Temp->show_data();
        P_Temp++;
    }

    return 0;
}