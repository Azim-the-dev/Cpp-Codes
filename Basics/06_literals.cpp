#include<iostream>
using namespace std;

int main()
{
    cout<<"The size of 23.43 is: "<<sizeof(23.43)<<endl;
    cout<<"The size of 23.43f is: "<<sizeof(23.43f)<<endl;
    cout<<"The size of 23.43l is: "<<sizeof(23.43l)<<endl;
    /*
    By Deafult cpp compiler read any floating number as duble
    Ex: 24.56 (For gcc this is duble)
    To change the type add 'f' 'd 'f' at the end
    like this: 24.56f
    */

    return 0;
}