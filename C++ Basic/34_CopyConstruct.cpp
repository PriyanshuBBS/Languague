// ****** Copy Constructor *****   Note: Compilor provides by default copy constructor



#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number(){}

    Number(int x)
    {
        a = x;
    }

    Number(Number &obj) // Copy constructor
    {
        cout << "Copy Constructor called !!!\n";
        a = obj.a;
    }

    void display()
    {
        cout << "Number is " << a << endl;
    }
};

int main()
{
    Number n1(25),n3;
    n1.display();

    Number n2(n1); // Copying object n1 into n2 . Alias --> Number n2 = n1;
    cout << "Object n2\n";
    n2.display();

    cout << "Object n3\n";
    n3 = n2;       // Copy constructor not called as it is made before
    return 0;
}