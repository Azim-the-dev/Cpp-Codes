// Write a program to perform single inheritance.

#include <iostream>
using namespace std;

class Azim
{
protected:
    int data;

public:
    void set_data(int data)
    {
        this->data = data;
    }
};

class Azim2 : public Azim
{
public:
    void get_data()
    {
        cout << "The value of data ia: " << data << endl;
    }
};

// [ Azim ---> Azim2 ] // Single Inheritance

int main()
{
    Azim2 A1;

    int data;
    cout << "Enter a number for Data: ";
    cin >> data;

    A1.set_data(data);
    A1.get_data();

    return 0;
}