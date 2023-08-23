#include<iostream>
using namespace std;

int main()
{
    float a = 77.99;
    int b = int(a);

    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of a (After typecasting into int) is: "<<b<<endl;
    cout<<"The value of a (After typecasting into int) is: "<<(int)a<<endl;
    cout<<"The value of a (After typecasting into int) is: "<<int(a)<<endl; // Boath are valid 👍

    return 0;
}