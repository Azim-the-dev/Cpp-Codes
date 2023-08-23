#include <iostream>
using namespace std;

class sum_num
{
private:
    friend void interfere(sum_num& N0);

    int num1;
    int num2;

public:
    void set_num()
    {
        cout << "Enter two numbers: " << endl;
        cin >> num1 >> num2;
    }

    void sum_of_num()
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
};

void interfere(sum_num& N0) // call by ref
{
    N0.num1 = 0;
    N0.num2 = 0;
}

int main()
{
    sum_num N1;

    N1.set_num();
    interfere(N1); // Pass object by reference
    N1.sum_of_num();

    return 0;
}
