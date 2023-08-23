#include <iostream>
#include <string>
using namespace std;

int main()
{
    string my_name = "Azim";
    string your_name;
    bool ind;

    cout << "My name is: " << my_name << endl;
    cout << endl;

    cout << "Enter your name: ";
    getline(cin, your_name); // IMP
    cout << endl;

    if (my_name == your_name)
    {
        ind = true;
    }
    else
    {
        ind = false;
    }

    switch (ind)
    {
    case true:
        cout << "Dyem, Your name is also: " << your_name << "!!" << endl;
        break;
    case false:
        cout << "Your name is: " << your_name << endl;
        break;
    default:
        break;
    }

    return 0;
}