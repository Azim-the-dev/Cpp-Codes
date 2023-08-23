#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Write mode
    ofstream fout("Files/name.txt");

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    fout << name; // Writing on name.txt

    cout << "Your name seved !" << endl;
    cout << "Path: Files/name.txt" << endl;

    fout.close();

    // Read mode
    ifstream fin("Files/name.txt");

    string content;
    getline(fin, content);

    cout << "The content of name.txt is: " << content << endl;

    fin.close();

    return 0;
}