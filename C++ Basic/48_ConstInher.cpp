#include <iostream>
using namespace std;

class Base1
{
    int b1;

public:
    Base1(int x)
    {
        b1 = x;
        cout << "1st Base class constructor called\n";
        cout << "Base1 " << b1 << endl;
    }
};

class Base2
{
    int b2;

public:
    Base2(int x)
    {
        b2 = x;
        cout << "2nd Base class constructor called\n";
        cout << "Base2 " << b2 << endl;
    }
};

class Derived : public Base2, public Base1
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    { // Passing values to B1,B2 through Derived
        derived1 = c;
        derived2 = d;
        cout << "Derived constructor called\n";
    }

    void PrintDerived()
    {
        cout << "Derived 1 : " << derived1 << endl;
        cout << "Derived 2 : " << derived2 << endl;
    }
};

int main()
{
    Derived D(10, 20, 30, 40);

    D.PrintDerived();
    return 0;
}