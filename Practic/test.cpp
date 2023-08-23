#include <iostream>
using namespace std;

class student
{
private:
    int a;
    int b;

public:
    void set_data()
    {
        cout<<"LOL"<<endl;
    }
    void display_data()
    {
        cout<<"LOL"<<endl;
    }
};

int main()
{
    student azim;

    azim.display_data();
    azim.set_data();

    return 0;
}