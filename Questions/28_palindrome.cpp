// Write a program to check string is palindrome or not.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void palindrome(string str1)
{
    string str2 = str1;

    reverse(str2.begin(), str2.end()); // Reverseing

    int result = str1.compare(str2); // Compare

    if (result == 0)
    {
        cout << "The String is palindrome!" << endl;
    }
    else
    {
        cout << "The String is not palindrome!" << endl;
    }
}

int main()
{
    string str;

    cout << "Enter a string: " << str << endl;
    cin >> str;

    palindrome(str);

    return 0;
}