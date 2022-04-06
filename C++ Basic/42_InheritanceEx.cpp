#include <iostream>
#include <math.h>
using namespace std;
class SimpleCal
{
protected:
    int x, y;

public:
    void set(int m, int n)
    {
        x = m;
        y = n;
    }

    void result()
    {
        cout << "The Sum of Numbers is " << x + y << endl;
        cout << "The Product of Numbers is " << x * y << endl;
        cout << "The Subtraction of Numbers is " << x - y << endl;
        cout << "The Divison of Numbers is " << x / y << endl;
    }
};

class Scientific
{
protected:
    int p, q;

public:
    void setsci(int m, int n)
    {
        p = m;
        q = n;
    }

    void sciresult()
    {
        cout << "The power of " << p << " ^ " << q << " is " << pow(p, q) << endl;
        cout << "Square Root of " << p << " is " << sqrt(p) << endl;
    }
};

class Hybrid : public SimpleCal, public Scientific
{
public:
    void display()
    {
        cout << "All the Operations result are \n";
    }
};

int main()
{

    Hybrid Cal1;

    Cal1.set(12, 32);
    Cal1.setsci(44, 2);
    Cal1.display();
    Cal1.result();
    Cal1.sciresult();

    return 0;
}