// This program is about friend function

#include <iostream>
using namespace std;

class azim
{
private:
    int a = 100;

    friend void no_name(); // Declaration friend function (it meanse this function can acess this class's private members)

public:

    friend void no_name2(azim A1); // It can be declared here too

    void print_a()
    {
        cout << a << endl;
    }
};

void no_name()
{
    azim A0;
    // cout << a << endl;  // This is wrong
    cout << A0.a << endl; // Right
}

void no_name2(azim A1)
{
    cout << A1.a << endl;
}

int main()
{
    azim A2;

    A2.print_a();
    no_name();
    no_name2(A2);

    return 0;
}

/* PRROPERTIES OF FRIEND FUNCTION
 * --> Not in the scope of class
 * --> It can't called fron the object of that class
 * --> No need object to call. You can call only functions
 * --> U saly contains the object as arguments
 * --> Can be declared inside public or private section of the
 * --> It can not acess the members directly by their names. It need object_name.member_name to acess any member of that class
 */