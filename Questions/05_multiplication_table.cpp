// Write a program to print multiplication table.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;

    cout << "Enter number for multiplication table: ";
    cin >> num;

    cout << "Multiplication table of "<< num << " 🔽 " << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << setw(3) << "X" << setw(3) << i << setw(3) << "=" << setw(3) << (num * i) << endl;
    }
    cout << endl;

    return 0;
}