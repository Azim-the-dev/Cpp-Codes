#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;

    // Openin files using memeber function open() and writing it
    fout.open("Files/azim2.txt");

    fout << "It's Azim"; // This will write It's Azim string on azim2.txt

    cout << "String 'Sk Azim' is sucessfully printed !" << endl;

    fout.close(); // Closing the file

    ifstream fin;

    // Openin files using memeber function open() and reading it
    fin.open("Files/azim2.txt");

    string content;

    getline(fin, content);

    cout << content << endl;

    fin.close(); // Closing the file

    return 0;
}