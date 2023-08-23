// Write a program to count number of words and lines in a file.

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ifstream fin;
    fin.open("Files/Questions.txt"); // Reading

    int word_count = 0, line_count = 0;
    string word, line;

    while (fin >> word)
    {
        word_count++;
    }

    fin.close();

    fin.open("Files/Questions.txt"); // Again Reading

    while (getline(fin, line))
    {
        line_count++;
    }

    fin.close();

    cout << "Number of words in the file: " << word_count << endl;
    cout << "Number of lines in the: " << line_count << endl;

    return 0;
}