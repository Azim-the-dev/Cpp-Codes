// This program is about deafult constructor

#include <iostream>
using namespace std;

class azim
{
private:
    int a;

public:
    azim(void); // Deafult constructor is created (Name shoud be same as class)

    void show_data()
    {
        cout << "a = " << a << endl;
    }
};

azim ::azim(void) // ---> This is a deafult constructor as it takes no paramet
{
    // cout << "Hello Azim" << endl;--> This will also print
    a = 10;
}

int main()
{
    azim A1;

    A1.show_data();

    return 0;
}

/* WHAT IS CONSTRUCTOR ?
 * Constructor is a spacial member function with the same name as of class.
 * It is ushed to initializ the objects of its calss.
 * It is automatically invoked whenever an object is created.
 */

///////////////////////////////////////////////////////////////////////////

/* CHARACTERISTICS OF CONSTRUCTOR ...
 * It shoud be declared in the publuc saction oh tje class.
 * They are automatically invoked whenever the object is created.
 * They cannot return values and do not return types.
 * It can have deafult arguments.
 * We cannot refer to thrir adress.
 */

// Constructor is like a normal function with no return type
// Constructor's name same as class.