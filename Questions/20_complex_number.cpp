// Write a program to perform + operator overloading for two complex number addition.

#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imag;

public:
    void Input()
    {
        cout << "Enter real parts: ";
        cin >> real;

        cout << "Enter imaginary parts: ";
        cin >> imag;
    }

    Complex operator+(Complex obj)
    {
        Complex temp;

        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;

        return temp;
    }

    void Output()
    {
        cout << "Output is: " << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex com1, com2, res;

    cout << "FOR FIRST COMPLEX NUMBER" << endl;
    com1.Input();

    cout << endl;

    cout << "FOR SECOND COMPLEX NUMBER" << endl;
    com2.Input();

    res = com1 + com2;

    res.Output();

    return 0;
}