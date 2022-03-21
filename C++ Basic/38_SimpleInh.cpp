// ********** Multiply Private member of Base class ************

#include <iostream>
using namespace std;
class base
{
    int a; // Can't be derived

public:
    int b;

    void setdata();
    int getprivate(); // Because a Derived can't acces private a
};

void base ::setdata()
{
    a = 10;
    b = 30;
}

int base ::getprivate()
{
    return a;
}

class derived : base // Private Inheritance
{
    int c;

public:
    derived()
    {
        setdata();
        c = b * getprivate();
        cout << "Multiplication of " << getprivate() << " and " << b << " is " << c << endl;
    }
};

int main()
{
    derived d;
    // d.setdata(); If privately inherited this can't be called but in derived class it is valid
    return 0;
}