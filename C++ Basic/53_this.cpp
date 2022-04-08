#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void setdata(int a)
    {
        this->a = a; // If used without 'this' pointer/keyword, Garbage value shown
    }

    void getdata()
    {
        cout << "Value of A is: " << a << endl;
    }
};

int main()
{
    A a;
    a.setdata(2);
    a.getdata();
    return 0;
}