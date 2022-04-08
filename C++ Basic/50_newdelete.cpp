#include <iostream>
using namespace std;

struct A // Custom Datatype
{
    int p;

    A(int q) : p(q)
    {
        cout << p << endl;
    }
};

int main()
{
    // new in Custom Data type (Structure)
    A *o1 = new A(10);

    // new in Array
    int *arr = new (nothrow) int[3];

    if (!arr)
    {
        cout << "Memory allocation Failed\n";
    }
    else
    {
        arr[0] = 10;
        *(arr + 1) = 20;
        arr[2] = 30;

        cout << "Value in Array is : " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << arr[i] << "\t";
        }
    }

    delete o1;
    delete [] arr;

    cout<<endl;
    return 0;
}