// ********* Pure Virtual Function and Abstract Class *********

#include <iostream>
using namespace std;
class Base  //Abstract Class
{
public:
    virtual void Show() = 0; // Pure Virtual function

    Base()
    {
        cout << "Constructor of Base Class\n";
    }
};

class Derived : public Base
{
public:
    void Show() //If no re-defination then, Derived will became Abstract also
    {
        cout << "Show of Derived class\n";
    }
};

int main()
{
    Base *ptr;
    Derived d;

    ptr = &d;

    ptr->Show();

    return 0;
}