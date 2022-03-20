// ********* Constructor Overloading ************

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void Print()
    {
        cout << "Complex Number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1;
    c1.Print();

    Complex c2(2);
    c2.Print();

    Complex c3(28, 9);
    c3.Print();

    return 0;
}