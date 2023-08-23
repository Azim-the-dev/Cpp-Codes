#include <iostream>
using namespace std;

class Bank_Deposit
{
private:
    int principal;
    int years;
    int intrest_rate;
    int return_value;

public:
    Bank_Deposit() {}
    Bank_Deposit(int p, int y, float r); // Float
    Bank_Deposit(int p, int y, int r);   // Int

    void show();
};

Bank_Deposit ::Bank_Deposit(int p, int y, float r)
{
    principal = p;
    years = y;
    intrest_rate = r;
    return_value = principal;

    for (int i = 0; i < y; i++)
    {
        return_value = return_value * (1 + r);
    }
}

Bank_Deposit ::Bank_Deposit(int p, int y, int r)
{
    principal = p;
    years = y;
    intrest_rate = float(r) / 100;
    return_value = principal;

    for (int i = 0; i < y; i++)
    {
        return_value = return_value * (1 + intrest_rate);
    }
}

void Bank_Deposit ::show()
{
    cout << "Princlipal amount was: " << principal << ". Return value after " << years << " years is " << return_value << endl;
}

int main()
{
    Bank_Deposit BD1, BD2, BD3;

    int p, y, R;
    float r;

    cout << "Enter the value of p y and r " << endl;
    cin >> p >> y >> r;

    BD1 = Bank_Deposit(p, y, r);

    BD1.show();

    cout << "Enter the value of p y and R " << endl;
    cin >> p >> y >> R;

    BD2 = Bank_Deposit(p, y, R);

    BD2.show();

    return 0;
}

// This program is not complicted yet.