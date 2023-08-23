// TYhis progaram is about how to Write operation on a file using 'ofstream' class (constructor method)

#include <iostream>
#include <fstream>
using namespace std;

/* The useful classes for working with files in cpp are:
 *
 * fstrambase ------------------------------->
 * ofstrem ---> derived from fstrambase -----> >-----> // Inside <fstream>
 * ifstrem ---> derived from fstrambase ----->
 *
 */

// Primarily, There are two ways to open a file:
// > Using the constructor
// > Using the memeber function open() of the class

int main()
{
    string Azim = "Sk Azim";

    // Openin files using constructor and writing it
    ofstream out("Files/azim.txt");

    out << Azim; // This will write Sk Azim string on azim.txt

    cout << "String 'Sk Azim' is sucessfully printed !" << endl;

    out.close(); // Closing the file

    string Azim2;

    // Openin files using constructor and reading it
    ifstream in("Files/azim.txt");

    getline(in, Azim2); // This wil read only first line (For more lines use eof() method)

    cout << Azim2 << endl;

    in.close(); // Closing the file

    return 0;
}