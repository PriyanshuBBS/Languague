// Template : Function Template -------------------->

#include <iostream>
using namespace std;

template <class T>
void swaap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
template <class X, class Y>
float average(X a, Y b)
{
    return (a + b) / 2;
}

int main()
{
    float result = average(1.2, 3.1); // Here <> is not needed like Template classes
    cout << "The average of 12 and 31 is: " << result << endl;

    int x = 12;
    int y = 23;

    swaap(x, y);
    cout << x << " and " << y << endl;

    return 0;
}