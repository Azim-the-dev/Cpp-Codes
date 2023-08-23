// Write a Program for Swapping of two numbers using pass by address.

#include <iostream>
using namespace std;

// Function using pass by address.
void swapNumbers(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    cout << "After swapping (INSIDE THE FUNCTION): num1 = " << *num1 << ", num2 = " << *num2 << endl;
}

int main()
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    swapNumbers(&num1, &num2);

    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
