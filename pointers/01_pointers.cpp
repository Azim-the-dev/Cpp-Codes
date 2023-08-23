// The program ia about pointers in c++

#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 10;
    int *ptr = &a;
    *ptr = 0; // This will change the value of a

    cout << "The value of a is (Using ptr): " << *ptr << endl;

    // New operator
    int *ptr2 = new int(99);

    cout << "The value at aderee ptr2: " << *ptr2 << endl;

    // Array using new operator
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    cout << "The value of arr[0] is: " << arr[0] << endl;
    cout << "The value of arr[1] is: " << arr[1] << endl;
    cout << "The value of arr[2] is: " << arr[2] << endl;

    // Delete operator
    delete[] arr; // This will delet dinamacily allocted array

    cout << "The value of arr[0] is: " << arr[0] << endl;
    cout << "The value of arr[1] is: " << arr[1] << endl;
    cout << "The value of arr[2] is: " << arr[2] << endl;

    return 0;
}