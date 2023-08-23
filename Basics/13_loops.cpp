#include <iostream>
using namespace std;

int main()
{
    int num, t, i;

    cout << "Choose your emoji" << endl;
    cout << "For 😄 Enter 1" << endl;
    cout << "For 🥲  Enter 2" << endl;
    cout << "For 😏 Enter 3" << endl;

    cout << endl;
    cout << "Enter: ";
    cin >> num;
    cout << endl;
    cout << "Enter how namy time the emojis you want to see: ";
    cin >> t;
    cout << endl;

    i = 0;
    if (num == 1)
    {
        while (true)
        {
            cout << "😄 ";
            i++;
            if (i == t)
            {
                break;
            }
        }
    }

    if (num == 2)
    {
        for (i = 1; i <= t; i++)
        {
            cout << "🥲  ";
        }
    }

    i = 1;
    if (num == 3)
    {
        do
        {
            cout << "😏 ";
            i++;
        } while (i <= t);
    }

    return 0;
}