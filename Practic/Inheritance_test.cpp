#include <iostream>
using namespace std;

class base
{
private:
    int a = 10;

public:
    int b = 20;

protected:
    int c = 30;
};

    // class derived : private base // private
    // {
    //     void show()
    //     {
    //         cout << a << b << c;
    //     }
    // };

    // class derived : public base // public
    // {
    //     void show()
    //     {
    //         cout << a << b << c;
    //     }
    // };

    // class derived : protected base // protected
    // {
    //     void show()
    //     {
    //         cout << a << b << c;
    //     }
    // };

int main()
{
    return 0;
}