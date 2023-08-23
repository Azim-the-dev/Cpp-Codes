// this program is about enum

#include <iostream>

using namespace std;
int main()
{
    enum Meal{Breakfast, Lunch, Dinner};

    // Breakfast = 0
    // Lunch = 1
    // Dinner = 2

    cout << Breakfast << endl << Lunch << endl << Dinner << endl;


    enum Meal2{Breakfast2 = 10, Lunch2, Dinner2};

    // Breakfast2 = 10
    // Lunch2 = 11
    // Dinner2 = 12

    cout << endl << Breakfast2 << endl << Lunch2 << endl << Dinner2 << endl;

    return 0;
}