// ******** Abiguity in Inheritance **********

#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "Kemiti auchu\n";
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Good Morning\n";
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2::greet();
    }
};

class Base
{
public:
    void say()
    {
        cout << "Hey Man\n";
    }
};

class Derive : public Base
{
public:
    void say()
    {
        cout << "Priyanshu \n";
    }
};

int main()
{

    // ** Type 1
    //     Base1 b1;
    //     Base2 b2;
    //     Derived d1;
    //     b1.greet();
    //     b2.greet();
    //     d1.greet(); // This will Show Ambiguity

    // Type 2, 1 Base 1 Derive -
    Base b;
    Derive d;
    b.say();
    d.say();
    return 0;
}