// Write a program to create an integer array using new operator and find the sum and  average of array elements.

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *array = new int[size];

    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
        sum += array[i];
    }

    float average = sum / (float)size;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    delete[] array;

    return 0;
}