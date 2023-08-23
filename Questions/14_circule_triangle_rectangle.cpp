// Write a Program to find area of circle, triangle and rectangle using function overloading.

#include <iostream>
using namespace std;

const float PI = 3.14159;

float area(float radius) // Circle
{
    return PI * radius * radius;
}

float area(float one_half, float base, float height) // Triangle
{
    return one_half * base * height;
}

float area(float length, float width) // Rectangle
{
    return length * width;
}

int main()
{
    float radius, base, height, length, width, one_half = 0.5;

    // Circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Area of the circle: " << area(radius) << endl;

    // Triangle
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    cout << "Area of the triangle: " << area(one_half, base, height) << endl;

    // Rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    cout << "Area of the rectangle: " << area(length, width) << endl;

    return 0;
}