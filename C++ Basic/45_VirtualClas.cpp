#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void setroll(int x)
    {
        roll_no = x;
    }

    void printroll()
    {
        cout << "The roll No is " << roll_no << endl;
    }
};

class Test : virtual public Student
{ // It can be public virtual also
protected:
    int math, physics;

public:
    void setmarks(int m1, int m2)
    {
        math = m1;
        physics = m2;
    }

    void printmarks()
    {
        cout << "Marks in Maths is " << math << endl;
        cout << "Marks in Phyiscs is " << physics << endl;
    }
};

class Sports : public virtual Student
{
protected:
    int score;

public:
    void setscore(int x)
    {
        score = x;
    }

    void printscore()
    {
        cout << "Sports score is " << score << endl;
    }
};

class Result : public Sports, public Test
{

    int total;

public:
    void displayresult()
    {
        total = math + physics + score;
        printroll();
        printmarks();
        printscore();
        cout << "Total score is " << total << endl;
    }
};

int main()
{
    Result Priyanshu;
    Priyanshu.setroll(12); // Roll Number used once, As Virtual Class used. If not used Ambiguity happens
    Priyanshu.setmarks(82, 79);
    Priyanshu.setscore(6);
    Priyanshu.displayresult();

    return 0;
}