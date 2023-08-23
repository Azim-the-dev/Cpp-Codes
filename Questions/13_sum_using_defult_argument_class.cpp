// Write a program to find sum of four numbers using default argument passing in member function.

#include <iostream>
using namespace std;

class Sum
{
public:
    int Numbers(int num1 = 0, int num2 = 0, int num3 = 0, int num4 = 0) // Deafult arguments
    {
        return num1 + num2 + num3 + num4;
    }
};

int main()
{
    Sum obj;

    int num1, num2, num3, num4;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    cout << "Enter the fourth number: ";
    cin >> num4;

    cout << "Sum of first two number (EG: num1 + num2): " << obj.Numbers(num1, num2) << endl;
    cout << "Sum of first three number: (EG: num1 + num2 + num3): " << obj.Numbers(num1, num2, num3) << endl;
    cout << "Sum of four numbers (EG: num1 + num2 + num3 + num4): " << obj.Numbers(num1, num2, num3, num4) << endl;

    return 0;
}