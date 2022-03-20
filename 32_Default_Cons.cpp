// ***** Complex Number print with 0 imaginary number as default value ******

#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int x, int y = 0)
    {
        a = x;
        b = y;
    }

    void print();
};

int main()
{
    Complex  c1(2);
    c1.print();

    Complex c2(3,5);
    c2.print();

    return 0;
}

void Complex ::print()
{

    cout << "Number is " << a << " + " << b << "i\n";
}