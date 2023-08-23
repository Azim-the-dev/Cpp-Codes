#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    string user_file, my_file;
    int choice;
    char y_n;

    ifstream fin;
    ofstream fout;

    cout << "ADVANCE TXT FILE MODIFIER CMD UTILITYs" << endl;
    cout << "-" << endl
         << "-" << endl
         << "-" << endl;

    cout << "Enter your file name (Example 'azim.txt')" << endl;
    cout << "⏩ ";
    cin >> user_file;

    cout << endl;
    cout << "1. For copy your containt of '" << user_file << "' to another file" << endl;
    cout << "2. For other utilitys (Will be written)" << endl;
    cout << "3. For other utilitys (Will be written)" << endl;
    cout << "4. For other utilitys (Will be written)" << endl;
    cout << "5. For other utilitys (Will be written)" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the file name where the copy of '" << user_file << "' will save (Example 'azim2.txt')" << endl;
    cout << "⏩ ";
    cin >> my_file;

    if (choice == 1)
    {
        fin.open("user_file");
        fout.open("my_file");

        char ch;

        cout << endl;
        cout << "Do you want to continue (Y/N): ";
        cin >> y_n;

        // if (y_n == 'y' || y_n == 'Y')
        // {
        //     cout << " - " << endl;
        // }
        // else
        // {
        //     return 1;
        // }

        while (fin.eof() == 0)
        {
            fin.get(ch);
            fout.put(ch);
        }

        cout << "File copied successfully." << endl;

        fin.close();
        fin.close();
    }

    return 0;
}

// This is not complicted yet.