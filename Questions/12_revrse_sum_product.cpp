// Write a Program to find reverse of a number and print sum and product of digits.

#include <iostream>
using namespace std;

int main()
{
    int num, temp = 0, rev = 0, sum = 0, product = 1;

    cout << "Enter number for reversing it: ";
    cin >> num;

    while (num != 0)
    {
        temp = num % 10;
        sum += temp; // sum
        product *= temp; // product
        rev = rev * 10 + temp; // reversed

        num = num / 10;
    }

    cout << "Reversed 🔀 " << rev << endl;
    cout << "Sum 🔀 " << sum << endl;
    cout << "Product 🔀 " << product << endl;

    return 0;
}