#include <iostream>
using namespace std;

inline int sum(int a, int b) // Use for small functions
{
    a + b;
}

int Deafult_arg(int num, int num2 = 100) // Default Arguments
{                                       // num 2 is default arguments in this function
    return num + num2;
}

int main()
{
    int a = 10, b = 10;

    cout << "The sum of a and b is: " << sum(a, b) << endl;

    int num = 10;

    cout << "num = " << Deafult_arg(num) << endl;

    return 0;
}

// Not use inline functions in:
// Recorson
// Static variable
// Loops
// Swich Case

// Only use in simple functions