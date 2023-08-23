#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "Count = " << count << endl;
    }

    ~num()
    {
        cout << "Destructor Count = " << count << endl;
        count--;
    }
};

int main()
{
    num a;

    {
        cout << "Entering..." << endl;
        num b;
        cout << "Exiting..." << endl;
    }

    return 0;
}

// Destructor nither takes an argument nor does it return any value