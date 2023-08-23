#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"Azim"<<setw(14)<<"Azim"<<endl;
    cout<<"Azim"<<"          "<<"Azim"<<endl; // in the space theare is 10 space
    /*
     * In the upper👆 code 'setw(14)' = 10 space
     * Becauce 4 space decresed by 'Azim' String
     */
    
    int a = 0;

    while(true)
    {
        cout<<a++<<setw(5)<<a++<<endl;

        if (a == 1000)
        {
            break;
        }
    }

    return 0;
}