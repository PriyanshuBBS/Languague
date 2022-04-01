// ******** Multiple Inheritance Basic Concept ************

#include <iostream>
using namespace std;
class Base1
{
protected:
    int x;

public:
    void set1(int a)
    {
        x = a;
    }
};

class Base2
{
protected:
    int y;

public:
    void set2(int a)
    {
        y = a;
    }
};

class Derived : public Base1, public Base2 // Using Multiple Inheritance Concept
{
public:
    void display()
    {
        cout << "Number From Base1 : " << x << endl;
        cout << "Number From Base2 : " << y << endl;
        cout << "Sum of Numbers : " << x + y << endl;
    }
};

int main()
{
    Derived Priyanshu;

    Priyanshu.set1(2);
    Priyanshu.set2(10);
    Priyanshu.display();

    return 0;
}