// Function Template: Member functions overloading --------->

#include <iostream>
using namespace std;

template <class T>
void fun(T a)
{
    cout << "Template function : " << a << endl;
}

void fun(int x)
{
    cout << "Non - Template function : " << x << endl;
}

int main()
{

    // Which function will be used Template or Non- Template

    fun(56); // Exact match function have highest priority
    return 0;
}