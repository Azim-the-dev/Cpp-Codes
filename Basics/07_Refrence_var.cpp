#include<iostream>
using namespace std;

int main()
{
    int a = 90;
    int &b = a; // b is now Reference variablr for a

    cout<<"The value of a: "<<a<<endl;
    cout<<"The value of a (using b): "<<b<<endl;

    return 0;
}