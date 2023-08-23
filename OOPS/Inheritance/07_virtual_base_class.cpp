// This program is about virtual class

#include <iostream>
using namespace std;

// class 1
class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int r_n)
    {
        roll_no = r_n;
    }

    void get_roll_no()
    {
        cout << "Your roll noumber is: " << roll_no << endl;
    }
};

// class 2
class Exam : virtual public Student // virtual class
{
protected:
    int cpp, java;

public:
    void set_marks(int c, int j)
    {
        cpp = c;
        java = j;
    }

    void get_marks()
    {
        cout << "Your cpp marks is: " << cpp << endl;
        cout << "Your java marks is: " << java << endl;
    }
};

// class 3
class Sports : virtual public Student // virtual class
{
protected:
    int score;

public:
    void set_score(int s)
    {
        score = s;
    }

    void get_score()
    {
        cout << "Your score is: " << score << endl;
    }
};

// class 4
class Result : public Exam, public Sports
{
public:
    void display_result()
    {
        get_roll_no();
        get_marks();
        get_score();
        cout << "Total result is: " << (cpp + java + score) << endl;
    }
};

//                >---[Exam]----->
// [Student]---->                  >----[Result]
//                >---[Sports]--->

// As Result inhereted from two similara class (Exam and Sports) so virtual class is needed

int main()
{
    Result Azim;

    Azim.set_roll_no(25);
    Azim.set_marks(97, 98);
    Azim.set_score(600);

    Azim.display_result();

    return 0;
}