// Thi sprogarm is about deafult argument constructor

#include <iostream>
using namespace std;

class azim
{
private:
    int a, b, c;

public:
    azim(int x = 7, int y = 7, int z = 7) // Deafult argument for all constructor are 7
    {                                     // It meanse if i'll not give any arguments from main() it automaticaly assigned with 7
        a = x;
        b = y;
        c = z;
    }

    void show_data()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

int main()
{
    azim A1(1, 2, 3); // 1,2,3 are arguments
    A1.show_data();

    cout << endl;

    azim A2; // No arguments, But automaticaly assugned datas due to deafult argument constructor
    A2.show_data();

    cout << endl;

    azim A3(1); // Only first one data assigned, others as constructor
    A3.show_data();

    return 0;
}