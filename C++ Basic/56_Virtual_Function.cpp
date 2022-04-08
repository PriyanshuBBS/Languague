// ************* Virtual Functions - Code **************

#include <iostream>
using namespace std;
class Base
{
public:
    void show()
    {
        cout << "Show Base Class\n";
    }

    virtual void print()
    {
        cout << "Print Base Class\n";
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Show Derived Class\n";
    }
    void print()
    {
        cout << "Print Derived Class\n";
    }
};

int main()
{
    Base *ptrBase;
    Base b;
    Derived d;

    ptrBase = &d;

    ptrBase->show();    //Non Virtual -> Compile time binding
    ptrBase->print();   //Virtual -> Runtime binding, overridding Base's function by derived
    return 0;
}

// #include <iostream>
// using namespace std;
// class Base
// {
// public:
//     int var_base;
//     virtual void display()  //Runs the function, to whom pointer points
//     {
//         cout << "1 var_base of Base Class is " << var_base << endl;
//     }
// };

// class Derived : public Base
// {
// public:
//     int var_derived;
//     void display()
//     {
//         cout << "2 var_derived  of derived  Class is " << var_derived << endl;
//     }
// };

// int main()
// {
//     Base *base_pointer; // Creating Base class Pointer

//     Base obj_base;
//     Derived obj_derived;

//     base_pointer = &obj_derived;
//     base_pointer->display();    //Default behaviour as it is pointer of Base, display of base runs

//     return 0;
// }