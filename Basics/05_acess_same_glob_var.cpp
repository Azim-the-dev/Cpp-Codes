#include<iostream>
using namespace std;

int num = 99;

int main()
{
    int num = 9;
    cout<<"The value of num is: "<<num<<endl;
    cout<<"The value of num GLOBAL is: "<<::num<<endl<<endl; // Use '::' to acess global variable. If you are using same variable names

    return 0;
}

// Global and local variable name can be same.
// But priorety will be go first to finction incide variable.