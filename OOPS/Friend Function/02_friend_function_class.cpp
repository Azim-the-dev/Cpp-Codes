// This is program is about using friend function inside class

#include <iostream>
using namespace std;

class num; // Forwad declaration // IMP

class sum
{
public:
    void add(num N1);
    // {
    //     cout << "Sum: " << N1.a + N1.b << endl;--> Wont work due to pre declaration of a,b
    // }                                          --> You have to declare after num function
};

class num
{
private:
    int a, b;

    friend void sum::add(num N1); // Declaration

public:
    void set_num()
    {
        cout << "Enter two numbwes:" << endl;
        cin >> a >> b;
    }
};

void sum::add(num N1)
{
    cout << "Sum: " << N1.a + N1.b << endl;
}

int main()
{
    num N1;
    sum S;

    N1.set_num();
    S.add(N1);

    return 0;
}