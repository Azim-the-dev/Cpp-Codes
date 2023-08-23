// Write a program in C++ display the name and roll number of 4 student.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[4];
    int roll_no[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter name for student number " << (i + 1) << ": ";
        getline(cin, name[i]);
    }

    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter roll number for student number " << (i + 1) << ": ";
        cin >> roll_no[i];
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Name for student number " << (i + 1) << " is: "<<name[i]<<endl;
    }

    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Roll number for student number " << (i + 1) << " is: "<<roll_no[i]<<endl;
    }

    return 0;
}