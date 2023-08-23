// This program takes a binary number from the user, checks if it is binary.
// Then converts the binary number into its one's complement.

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string str;

public:
    void read_str();
    void chk_bin();
    void onst_comp();
    void onst_comp_display();
};

void binary ::read_str()
{
    cout << "enter any binary number⏩: ";
    getline(cin, str);
}

void binary ::chk_bin()
{
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] != '0') && (str[i] != '1')) // Cheack binary
        {
            cout << "Incorrect binary format!!!" << endl;
            exit(0);
        }
    }
}

void binary ::onst_comp()
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
        {
            str[i] = '1';
        }
        else
        {
            str[i] = '0';
        }
    }
}

void binary ::onst_comp_display()
{
    cout << "1's complement ⏩: ";
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }
    cout << endl;
}

int main()
{
    binary st;

    st.read_str();
    st.chk_bin();
    st.onst_comp();

    return 0;
}