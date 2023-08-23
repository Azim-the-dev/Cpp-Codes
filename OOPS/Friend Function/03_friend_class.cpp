// The program is a simple calculator that takes input for two numbers and an operator.
// performs the specified arithmetic operation, and displays the result.
// Using friend class meathod. 

#include <iostream>
using namespace std;

class NUMOP; // Forward declaration of NUMOP class

class CAL
{
public:
    void calculator(NUMOP N0);
};

class NUMOP
{
public:
    int num1, num2;
    char op;

    friend CAL; // Now CAL class is friend

public:
    void set_num()
    {
        cout << "Enter number and operetor (EG: 2 + 2)" << endl;
        cin >> num1 >> op >> num2;
    }
};

void CAL::calculator(NUMOP N0)
{
    switch (N0.op)
    {
    case '+':
        cout << N0.num1 << " + " << N0.num2 << " = " << N0.num1 + N0.num2 << endl;
        break;

    case '-':
        cout << N0.num1 << " - " << N0.num2 << " = " << N0.num1 - N0.num2 << endl;
        break;

    case '*':
        cout << N0.num1 << " * " << N0.num2 << " = " << N0.num1 * N0.num2 << endl;
        break;

    case '/':
        cout << N0.num1 << " / " << N0.num2 << " = " << N0.num1 / N0.num2 << endl;
        break;

    default:
        cout << "Somethimg went wrong!!" << endl;
    }
}

int main()
{
    NUMOP N1;
    CAL A;

    N1.set_num();
    A.calculator(N1);

    return 0;
}