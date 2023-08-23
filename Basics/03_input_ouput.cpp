// This is a simple calculator

#include<iostream>

using namespace std;
int main()
{
    int num1,num2;
    char ch;

    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter the Operator E.G(+ - * /): ";
    cin>>ch;

    cout<<"Enter the second number: ";
    cin>>num2;

    switch(ch)
    {
        case '+':
        cout<<"Ans: "<<num1<<"+"<<num2<<"="<<num1+num2;
        break;

        case '-':
        cout<<"Ans: "<<num1<<"-"<<num2<<"="<<num1-num2;
        break;

        case '*':
        cout<<"Ans: "<<num1<<"*"<<num2<<"="<<num1*num2;
        break;

        case '/':
        cout<<"Ans: "<<num1<<"/"<<num2<<"="<<num1/num2;
        break;

    }

    return 0;
}
/* cout '<<' This is called Insertion operator */
/* cin '>>' This is called Extraction operator */