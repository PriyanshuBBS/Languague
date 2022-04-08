// ***** Templates using Multiple Parameters

/*
template <class T1, class T2>
*/

#include <iostream>
using namespace std;

template <class T1, class T2>

class Data
{
public:
    T1 Data_1; // int Data_1
    T2 Data_2; // char Data_2

    Data(T1 a, T2 b)
    {
        Data_1 = a;
        Data_2 = b;
    }

    void display()
    {
        cout << Data_1 << endl
             << Data_2 << endl;
    }
};

int main()
{
    Data<int, char> d(1, 'A');
    d.display();

    Data<int, float> d1(2, 8.9);
    d1.display();

    Data<char,float> d2('X',4.9);
    d2.display();
    return 0;
}