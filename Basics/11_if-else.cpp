#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int a;
    cout << "'😃' Is this a Smiley emoji?" << endl;
    cout << "1 for Yes and 0 for No: ";
    cin >> a;

    if (a == 1)
    {
        cout << "You are right👍" << endl;
    }
    else if (a == 0)
    {
        cout << "You are wrong👎" << endl;
    }
    else
    {
        cout << "Wrong Input😠" << endl;
    }

    return 0;
}