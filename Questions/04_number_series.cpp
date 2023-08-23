// Write a program to print the result for following series: 1! + 2! + 3! + . . .

#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num, sum = 0;

    cout << "Enter the number of terms: ";
    cin >> num;

    for (int i = 1; i <= num; ++i)
    {
        sum += factorial(i); // Sum of all factorials
    }

    cout << "Result of the series: " << sum << endl;

    return 0;
}