// The progaram is about Copy constructer

#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    Number() {}

    Number(int n)
    {
        num = n;
    }

    Number(Number &obj) // Copy constructer
    {
        num = obj.num;
    }

    void Display()
    {
        cout << "The number for this object is: " << num << endl;
    }
};

int main()
{
    Number N0, N1(99);

    N0.Display();
    N1.Display();

    // N1_Copy shoud exectly resemble N1
    Number N1_Copy(N1); // Copy constructer Object

    N1_Copy.Display();

    return 0;
}

// When no copy constructer found compilersupplies it's won constructer