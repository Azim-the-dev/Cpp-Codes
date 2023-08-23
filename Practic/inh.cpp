#include <iostream>
using namespace std;

class Azim1
{
public:
    void azim()
    {
        cout << "This is Azim1 class" << endl;
    }
};

class Azim2 : public Azim1
{
public:
    // void azim()
    // {
    //     cout << "This is Azim2 class" << endl;
    // }
};

int main()
{
    Azim1 A1;
    Azim2 A2;

    A1.azim();
    A2.azim();

    return 0;
}