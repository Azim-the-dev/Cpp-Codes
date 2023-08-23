// This Program is all about Static function in Class

#include <iostream>
using namespace std;

// int static_count = 0;

class Azim
{
private:
    int count = 0;
    static int static_count;

public:
    void Normal_Function()
    {
        count++;
        cout << "The value of Count is: " << count << endl;
    }

    static void Static_Function()
    {
        // cout << count << endl;--> Can not use in a Static class
        // Ststic functions only can use static variables
        static_count++;
        cout << "The value of Count is: " << static_count << endl;
    }
};

int Azim ::static_count;

int main()
{
    Azim AAA;

    // Azim::Normal_Function;--> Cant not acess becuse it is nnot static
    Azim::Static_Function(); // it be acessed by the class name
    // Azim::Normal_Function();--> You can not use normal function wuth the class name

    AAA.Normal_Function();

    return 0;
}

// Static function is used to acess only static variables
// it can be acessed by the class name, without need of objects