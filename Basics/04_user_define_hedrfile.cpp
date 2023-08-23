#include<iostream>
#include"azim.h" // This is user define heder file 😄
// This produce an error if 'azim.h' is not present in current directory
// For mor info google it "cpp referance for heder files"

using namespace std;
int main()
{
    int a = 10;
    int b = 20;

    cout<<"*USING USER DEFINE HEDERFILE*"<<endl;
    cout<<"   Befor Swap"<<" A: "<<a<<" B: "<<b<<endl;
    swap(&a,&b);
    cout<<"   After Swap"<<" A: "<<a<<" B: "<<b<<endl;

    return 0;
}