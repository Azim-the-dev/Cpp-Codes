// This program is about Swap two class member using friend class.

#include <iostream>
using namespace std;

class num1;
class num2; 

class Swap
{
public:
    void swap(num1 &N1, num2 &N2);
};

class num1
{
private:
    int a = 10;
    friend class Swap;

public:
    void display()
    {
        cout << "a = " << a << endl;
    }
};

class num2
{
private:
    int b = 20;
    friend class Swap;

public:
    void display()
    {
        cout << "b = " << b << endl;
    }
};

void Swap::swap(num1 &N1, num2 &N2)
{
    int temp = N1.a;
    N1.a = N2.b;
    N2.b = temp;
}

int main()
{
    num1 N1;
    num2 N2;

    cout << "Befor swaping 👇" << endl;
    N1.display();
    N2.display();
    cout << endl;

    Swap S;
    S.swap(N1, N2);

    cout << "After swaping 👇" << endl;
    N1.display();
    N2.display();

    return 0;
}