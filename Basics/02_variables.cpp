// Variables
#include <iostream>

using namespace std;
int main()
{
    int num1 = 10; // Not used in programm yet 🚫
    bool azim;     // New variable in cpp

    while (1)
    {
        cout << "    *" << endl
             << "   * *" << endl
             << " * * * *" << endl;
        cout << " - - - - - - - - - - - - - - -" << endl;
        cout << "|'1' for print piremant again |" << endl;
        cout << "|       '0' for Quit          |" << endl;
        cout << " - - - - - - - - - - - - - - -" << endl;
        cout << "Enter: ";
        cin >> azim;
        cout << endl;

        if (azim == false)
        {
            break;
        }
        else if (azim != false || azim != true)
        {
            cout << "Something Went Wrong!" << endl;
            break;
        }
    }

    return 0;
}
/*
 *  // bool is a new variable in cpp. it store only true == 1 or false == 0 value.
 *
 *    int num1 = 10;
 *    int num2 = 10;
 *    int num = (num1==num2); // If the condition is true num will assigne '1' otherwise '0'
 *
 *    cout<<num;
 */