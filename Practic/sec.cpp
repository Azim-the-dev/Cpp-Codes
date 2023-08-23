#include <iostream>
using namespace std;

int main()
{
    int second;

    cout << "Enter seconds: ";
    cin >> second;

    int hours = second / 3600;
    int minutes = (second % 3600) / 60;
    int seconds = second % 60;

    cout << "Hour: " << hours << endl;
    cout << "Minute: " << minutes << endl;
    cout << "Second: " << seconds << endl;

    return 0;
}
