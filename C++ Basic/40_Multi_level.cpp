#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void setdata(int);
    void getdata();
};

void Student ::setdata(int m)
{
    roll_number = m;
}

void Student ::getdata()
{
    cout << "Roll Number: " << roll_number << endl;
}

class Marks : public Student
{
protected:
    int phy, math;

public:
    void setmarks(int m, int n)
    {
        phy = m;
        math = n;
    }

    void getmarks()
    {
        cout << "Marks in Maths are: " << math << endl;
        cout << "Marks in Physics are: " << phy << endl;
    }
};

class Percentage : public Marks
{
public:
    void display()
    {
        getdata();
        getmarks();
        cout << "Percentage is " << (math + phy) / 2 << " % " << endl;
    }
};

int main()
{
    Percentage S;
    S.setdata(65);
    S.setmarks(98, 99);
    S.display();
    return 0;
}
