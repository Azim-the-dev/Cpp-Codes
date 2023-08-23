#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num[5];

    cout << "👇 Enter numbers" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
    }

    cout << "The numbers are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << setw(3);
    }

    int *ptr = num;

    cout << endl << "The numbers are (using pointer): ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr++) << setw(3);
    }

    return 0;
}
// Fore more arrays code goto: C_Language/Arrays (GitHub Repositories)