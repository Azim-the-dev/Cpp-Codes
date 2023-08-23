// This program represents a simple shop management system.
// It uses a class called "shop" to manage item information such as item IDs and prices.

#include <iostream>
using namespace std;

class shop
{
private:
    int item_id[100];
    int item_price[100];
    int counter;

public:
    void init_counter();
    void set_price();
    void display_price();
};

void shop ::init_counter()
{
    counter = 0;
}

void shop ::set_price()
{
    cout << "Enter ID of your item no " << (counter + 1) << ":";
    cin >> item_id[counter];
    cout << "Enter price of your item: ";
    cin >> item_price[counter];
    counter++;
}

void shop ::display_price()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with ID⏩: " << item_id[i] << " is " << item_price[i] << endl;
    }
}

int main()
{
    shop My_shop;
    int count;

    My_shop.init_counter();
    cout << "Enter How many items you have: ";
    cin >> count;
    cout << endl;

    for (int i = 0; i < count; i++)
    {
        My_shop.set_price();
    }

    cout << endl;
    My_shop.display_price();

    return 0;
}