// Write a program to Fibonaccy series numbers.

#include <iostream>
using namespace std;

int fib(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fib(num - 1) + fib(num - 2);
    }
}

int main()
{
    int num;

    cout << "Enter the number of term: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << fib(i) << endl;
    }

    return 0;
}