#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Choose your emoji" << endl;
    cout << "For 😄 Enter 1" << endl;
    cout << "For 🥲  Enter 2" << endl;
    cout << "For 😏 Enter 3" << endl;

    cout << endl;
    cout << "Enter: ";
    cin >> num;
    cout << endl;

    switch (num)
    {
    case 1:
        cout << "😄😄😄😄😄😄😄" << endl;
        cout << "😄😄😄😄😄😄😄" << endl;
        cout << "😄😄😄😄😄😄😄" << endl;
        break;

    case 2:
        cout << "🥲🥲🥲🥲🥲🥲🥲" << endl;
        cout << "🥲🥲🥲🥲🥲🥲🥲" << endl;
        cout << "🥲🥲🥲🥲🥲🥲🥲" << endl;
        break;

    case 3:
        cout << "😏😏😏😏😏😏😏" << endl;
        cout << "😏😏😏😏😏😏😏" << endl;
        cout << "😏😏😏😏😏😏😏" << endl;
        break;

    default:
        cout << "😠😠😠" << endl;
        break;
    }

    return 0;
}