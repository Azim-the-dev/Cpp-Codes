// Swap two numbers using new cpp meathod

#include <iostream>
using namespace std;

void swap(int &num1, int &num2) // IMP
{
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int num1 = 10, num2 = 20;

    cout << "Befor swaping: " << endl
         << "num1 = " << num1 << endl
         << "mum2 = " << num2 << endl
         << endl;

    swap(num1, num2); //...

    cout << "After swaping: " << endl
         << "num1 = " << num1 << endl
         << "mum2 = " << num2 << endl;

    return 0;
}