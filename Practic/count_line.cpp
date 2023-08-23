// Write a program to count number of words and lines in a file.

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ifstream fin;

    fin.open("Files/Questions.txt"); // Reading
    if (!fin)
    {
        cout << "Error opening file " << endl;
        return 1;
    }

    int words = 0, lines = 0;
    char ch;

    while (fin.eof() == 0)
    {
        fin.get(ch);

        if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            words++;
        }

        if (ch == '\n')
        {
            lines++;
        }
    }

    cout << "Number of words in the file: " << words << endl;
    cout << "Number of lines in the: " << lines << endl;

    fin.close();

    return 0;
}

// NOt complected yet. Might be Wrong