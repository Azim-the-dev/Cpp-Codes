// This is a simple example of Single Inheritance

#include <iostream>
using namespace std;

class azim
{
protected:
    int a;

public:
    void set_data(int x)
    {
        a = x;
    }
};

class azim2 : public azim
{
public:
    void get_data()
    {
        cout << "The value of a is: " << a << endl;
    }
};

int main()
{
    azim2 obj;

    obj.set_data(7);
    obj.get_data();

    return 0;
}