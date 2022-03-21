// ************ Protected Access Modifier *******

#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

public:
    int b;
};

class Derived : Base
{
};
int main()
{
    Derived d;
    cout << "Protected Access" << endl;
    // d.a; //As Protected in both Base and Derived Class
    return 0;
}