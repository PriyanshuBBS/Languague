#include <iostream>
#include <vector>
using namespace std;

template <class T> // Since Vectors have different data types
void display(vector<T> &v)
{
    cout << "Elements in vector are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // ----> Ways to create Vector
    vector<int> v1;        // 1. Zero Length
    vector<char> v2(4);    // 2. 4 length charcter vector
    vector<char> v3(v2);   // 3. Vector from v2
    vector<int> v4(6, 13); // 4. 6 times 13 stored

    display(v4);

    int element, size;

    cout << "Enter size of vector";
    cin >> size;

    cout << "Enter elements in vector: ";

    for (int i = 0; i < size; i++)
    {
        cin >> element;
        v1.push_back(element);
    }

    cout << ".at() operator " << v1.at(1) << endl; //.at()

    v1.pop_back(); // Deletes last element

    display(v1);

    vector<int>::iterator it = v1.begin(); // begin() set iterator at start of vector
    v1.insert(it + 1, 566);            //+1 moves iterator one position forward

    display(v1);

    return 0;
}