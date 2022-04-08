#include <iostream>
using namespace std;
class Shop
{
    int id, price;

public:
    void setdata(int x, int y)
    {
        id = x;
        price = y;
    }

    void display()
    {
        cout << "Id is " << id << endl;
        cout << "Price is " << price << endl;
    }
};

int main()
{
    Shop *ptr = new (nothrow) Shop[3];
    Shop *ptrTemp = ptr;

    if (!ptr)
    {
        cout << "Memory Allocation Failed\n";
    }
    else
    {

        for (int i = 0; i < 3; i++)
        {
            ptr->setdata(12, 190);
            ptr++;
        }

        for (int i = 0; i < 3; i++)
        {
            ptrTemp->display();
            ptrTemp++;
        }
    }

    delete[] ptr;
    delete ptrTemp;
    return 0;
}