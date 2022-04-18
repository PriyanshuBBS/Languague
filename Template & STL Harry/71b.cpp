//** Swap Vectors
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(5, 7); // three ints with a value of 100
    vector<int> b(3, 9); // five ints with a value of 200

    cout << "Before Swapping\n";
    cout << "a vector contains :";
    for (int i = 0; i < a.size(); i++)
        cout << ' ' << a[i];
    cout << '\n';

    cout << "b contains:";
    for (int i = 0; i < b.size(); i++)
        cout << ' ' << b[i];
    cout << '\n';

    a.swap(b);

    cout << "After Swapping\n";

    cout << "a vector contains:";
    for (int i = 0; i < a.size(); i++)
        cout << ' ' << a[i];
    cout << '\n';

    cout << "b contains:";
    for (int i = 0; i < b.size(); i++)
        cout << ' ' << b[i];
    cout << '\n';

    return 0;
}