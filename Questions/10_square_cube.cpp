// Write a Program to find square and cube of a number using inline function.

#include <iostream>
using namespace std;

inline int square(int num)
{
    return num * num; // Square
}

inline int cube(int num)
{
    return num * num * num; // Cube
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Square of " << number << " is: " << square(number) << endl;
    cout << "Cube of " << number << " is: " << cube(number) << endl;

    return 0;
}
