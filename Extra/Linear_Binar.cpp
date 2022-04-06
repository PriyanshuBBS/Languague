#include <iostream>
using namespace std;

int binary(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
     mid = (high + low) / 2;

    while (low <= high)
    {  
        

        if (arr[mid] == element)
        {
            return mid+1;
        }
        if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int A[] = {12, 31, 43, 53, 61, 71};

    int Size = sizeof(A) / sizeof(int);

    int Element = 43;

    cout << "The " << Element << " found at " << binary(A, Size, Element) << " position of Array\n";

    return 0;
}
