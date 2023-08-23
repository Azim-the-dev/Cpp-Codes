// Write a Program to find greatest among three numbers using nested if…else  statement.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter three numbers: " << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << "'" << num1 << "'" << " Is grstest among three" << endl;
        }
    }

    if (num2 > num1)
    {
        if (num2 > num3)
        {
            cout << "'" << num2 << "'" << " Is grstest among three" << endl;
        }
    }

    if (num3 > num1)
    {
        if (num3 > num2)
        {
            cout << "'" << num3 << "'" << " Is grstest among three" << endl;
        }
    }

    return 0;
}