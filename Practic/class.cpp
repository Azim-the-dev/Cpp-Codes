// Define class write a program in C++ find out the total and average marks of student using class concept

#include <iostream>
using namespace std;

class student
{
private:
    int Cpp, DSA, ENG, SAT;
    int sum;
    int avg;

public:
    void set_marks();
    void sum_avg();
};

void student::set_marks()
{
    cout << "Enter your cpp mark: ";
    cin >> Cpp;
    cout << "Enter your DSA mark: ";
    cin >> DSA;
    cout << "Enter your ENG mark: ";
    cin >> ENG;
    cout << "Enter your SAT mark: ";
    cin >> SAT;
}

void student::sum_avg()
{
    sum = (Cpp + DSA + ENG + SAT);
    avg = (sum / 4);

    cout << "You have total " << sum << " marks" << endl;
    cout << "Avrage: " << avg << endl;
}

int main()
{
    student azim;

    azim.set_marks();
    azim.sum_avg();

    return 0;
}