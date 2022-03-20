// ************** Destructors *************

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor called" << endl;
    }

    ~A()    // Fress the memory as object's work is done
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{   cout<<"In main()\n";
    A o1;
    {
        cout<<"Entered Block & Creating 2 more objects\n";
        A o2,o3;
        cout<<"Exiting Blocks\n";
    }   // Destructor will called to free space of o2 & o3 as work is done of them

    cout<<"Back in main()\n";
    return 0;
}