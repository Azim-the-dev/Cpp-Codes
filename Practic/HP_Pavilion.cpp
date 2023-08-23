#include <iostream>
using namespace std;

class Laptop
{
private:
    string name;
    string CPU;
    string GPU;
    string RAM;
    string OS;
    int price;

public:
    void set_data(string name1, string CPU1, string GPU1, string RAM1, string OS1, int price1)
    {
        name = name1;
        CPU = CPU1;
        GPU = GPU1;
        RAM = RAM1;
        OS = OS1;
        price = price1;
    }
    void show_data()
    {
        cout << "Name: " << name << endl;
        cout << "CPU: " << CPU << endl;
        cout << "GPU: " << GPU << endl;
        cout << "RAM: " << RAM << endl;
        cout << "OS: " << OS << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Laptop HP_Pavilion;

    HP_Pavilion.set_data("HP Pavilion Gaming", "Ryzen 5 Hexa Core AMD R5-5600H", "NVIDIA GeForce GTX 1650", "8 GB", "Windows 11", 59400);

    HP_Pavilion.show_data();

    return 0;
}