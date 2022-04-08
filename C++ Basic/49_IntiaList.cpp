#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    // A(int i, int j) : a(i), b(j)
    // A(int i, int j) : b(j),a(i+b)// Garbage Value as 'a' has to be intialized 1st
    A(int i, int j) : a(i), b(2 * j)
    {
        cout << "Constructor Executed\n";
        cout << "Value of A: " << a << endl;
        cout << "Value of 2*B: " << b << endl;
    };
};

int main()
{
    A x(2, 4);
    return 0;
}