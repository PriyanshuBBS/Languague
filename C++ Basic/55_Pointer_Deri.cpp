#include <iostream>
using namespace std;
class Base
{
public:
    int var_base;
    void display()
    {
        cout << "var_base of Base Class is " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "var_derived  of derived  Class is " << var_derived << endl;
    }
};

int main()
{
    Base *base_pointer; // Creating Base class Pointer
    Base obj_base;
    base_pointer = &obj_base; // Linking Base class Pointer to its obj

    Derived obj_derived;
    base_pointer = &obj_derived; // Pointer to Derived class

    base_pointer->var_base = 34; // As var_base is public
    base_pointer->display();     // Will run base class's function as it is pointer of it

    // base_pointer->var_derived=90; It will give error, as can acess only members inherited from base class

    Derived *derived_pointer;
    derived_pointer = &obj_derived;
    derived_pointer->var_derived = 100;
    derived_pointer->display(); // Here it is Runtime Binding/Late Binding

    return 0;
}