#include <iostream>
using namespace std;
class Complex
{
    int real, img;

public:
    void setdata(int x, int y)
    {
        real = x;
        img = y;
    }

    void getdata()
    {
        cout << "Real Part is : " << real << endl;
        cout << "Imaginary Part is : " << img << endl;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1; // int *ptr = & a;

    Complex *ptr = new Complex; // Here ptr is the object

    ptr->setdata(12, 23);
    (*ptr).getdata(); // ( ) is must due to order of precedence with .

    // ****** Array of Objects
    Complex *ptr1 = new Complex[3];
    ptr1->setdata(24, 22);
    ptr1->getdata();

    (ptr1 + 1)->setdata(9, 10);
    (ptr1 + 1)->getdata();

    delete[] ptr1;
    delete ptr;

    return 0;
}