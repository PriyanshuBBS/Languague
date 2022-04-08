// ********* Template using Default Parameter *********

#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class A
{
public:
    T1 a;
    T2 b;

    A(T1 x, T2 y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    A<> Priyanshu(12, 4.9); // < > is because no passing of Templates
    Priyanshu.display();

    cout << endl;

    A<char> Neha('N', 12.9); // < > is because no passing of Templates
    Neha.display();
    return 0;
}