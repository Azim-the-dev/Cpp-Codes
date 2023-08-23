#include <iostream>
using namespace std;

class A
{
public:
    int a;
};

class B : virtual public A
{
public:
    int b;
};

class C : virtual public A
{
public:
    int c;
};

class D : public B, public C
{
public:
    int d;

    void displayValues()
    {
        cout << "Values: " << a << " " << b << " " << c << " " << d << endl;
    }
};

int main()
{
    D obj;
    obj.a = 10;
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    obj.displayValues();

    return 0;
}
