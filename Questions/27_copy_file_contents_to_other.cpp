// Write a program to Copy the contents of one file to other.

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;

    fin.open("Files/Questions.txt");// Reading
    fout.open("Files/Questions_Copy.txt"); // Writing

    if (!fin.is_open() || !fout.is_open())
    {
        cout << "Error while opening file! " << endl;
        return 1;
    }

    char ch;

    while (fin.eof() == 0)
    {
        fin.get(ch);
        fout.put(ch);
    }

    cout << "File copied successfully." << endl;

    // Closeing
    fin.close();
    fout.close();

    return 0;
}