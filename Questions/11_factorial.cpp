// Write a Program to find the factorial of a number.

#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
} 

int main()
{
    int num;

    cout << "Enter number for factorial of this number: ";
    cin >> num;

    cout << "The factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}