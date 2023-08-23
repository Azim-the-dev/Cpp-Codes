// This Program is all about Static function in Class

#include <iostream>
using namespace std;

class Azim;

int static_count = 0;

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
        cout << "The value of ststic Count is: " << static_count << endl;
    }
};

// int Azim ::static_count;

int main()
{
    Azim AAA;

    // Azim::Normal_Function;--> Cant not acess becuse it is nnot static
    Azim::Static_Function();
    Azim::Static_Function();
    Azim::Static_Function();
    Azim::Static_Function();
    Azim::Static_Function();

    AAA.Normal_Function();
    AAA.Normal_Function();
    AAA.Normal_Function();
    AAA.Normal_Function();
    AAA.Normal_Function();

    return 0;
}