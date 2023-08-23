// Write a program to perform + operator overloading for string concatenation.

#include <iostream>
#include <string>
using namespace std;

class String
{
    string text;

public:
    String(const string &initialText)
    {
        text = initialText;
    }

    String operator+(const String &other) const
    {
        String result(text + other.text);
        return result;
    }

    void Display()
    {
        cout << "Concatenated Text: " << text << endl;
    }
};

int main()
{
    String str1("Hello ");
    String str2("world");

    String concatenated = str1 + str2; // Using overloaded +

    concatenated.Display();

    return 0;
}
