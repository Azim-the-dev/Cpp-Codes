#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Write mode
    ofstream fout;
    fout.open("Files/name2.txt");

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    fout << name; // Writing on name2.txt

    fout.close();

    cout << "Your name seved !" << endl;
    cout << "Path: Files/name2.txt" << endl;

    // Read mode
    ifstream fin;
    fin.open("Files/name2.txt");

    string content;
    // getline(fin, content);---> In this meathod only one line will read

    while (fin.eof() == 0) // In this meathod whole file will read (till end of file (EOF))
    {                      // fin.eof() is alwayas = 0, but in the rnd of file fin.eof() = 1
        getline(fin, content);
        cout << content << endl;
    }

    fin.close();

    cout << "The content of name2.txt is: " << content << endl;

    return 0;
}