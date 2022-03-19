// *************** Friend Member Functions & Class   ******************

#include <iostream>
using namespace std;

class complex; // Assuring Complior that complex is there [Forward Decleration]

class sumcomplex
{
public:
    void real_sum(complex x, complex y); // Who knows whether a & b exist
    void comp_sum(complex x, complex y);
};

class complex
{
    int a, b;

public:
    // Individually function friends
    // friend void sumcomplex ::real_sum(complex x, complex y);
    // friend void sumcomplex ::comp_sum(complex x, complex y);
    
    // Whole class friend
    friend class sumcomplex;
    void setnumber(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "Complex Number is " << a << " + " << b << "i" << endl;
    }
};

void sumcomplex ::real_sum(complex x, complex y)
{
    cout << "Real Part Sum: " << x.a + y.a << endl;
}

void sumcomplex ::comp_sum(complex x, complex y)
{
    cout << "Real Part Sum: " << x.b + y.b << endl;
}

int main()
{
    complex c1, c2, sum; // 2 variables created.
    c1.setnumber(2, 3);  // 1st Complex Number
    c1.display();

    c2.setnumber(2, 4); // 2nd Complex Number
    c2.display();

    sumcomplex c3;
    c3.real_sum(c1, c2);
    c3.comp_sum(c1, c2);

    return 0;
}