// Write a program to check a number is Amstrong or not.

#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0, temp, digit;

    cout << "Enter a number: ";
    cin >> number;

    temp = number;
    while (temp != 0)
    {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == number)
    {
        cout << number << " is amstrong number" << endl;
    }
    else
    {
        cout << number << " is not amstrong number" << endl;
    }

    return 0;
}