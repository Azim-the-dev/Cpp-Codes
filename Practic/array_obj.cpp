#include <iostream>
using namespace std;

class no_name
{
private:
    int num = 1;

public:
    void show_data()
    {
        cout << num << endl;
        num++;
    }
};

int main()
{
    no_name azim[5];

    for (int i = 0; i < 5; i++)
    {
        azim[i].show_data(); // Call the show_data() function for each object, So value 0 for each
    }

    return 0;
}