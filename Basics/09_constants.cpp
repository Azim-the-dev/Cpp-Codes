#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int num = 777;
    const float fnum = 777.77;
    const char cnum = '7';

    // fnum = 0;
    // num = 0;   >> these are won't work due to const data type 🚫
    // cnum = 0;

    cout << "num" << endl;
    cout << fnum << endl;
    cout << cnum << endl<< endl;

    return 0;
}