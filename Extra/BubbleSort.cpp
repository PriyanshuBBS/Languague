#include <iostream>
using namespace std;

void print(int Arr[], int size)
{
    
    for (int i = 0; i < size; i++)
    {

        cout << Arr[i] << " ";
    }
    cout << "\n";
}

void bubblesort(int *A, int size)
{
    int pass = 1;
    for (int i = 0; i < size - 1; i++) // For Passes, No. of Passes = size - 1
    {   cout<<"Pass No "<<i+1<<endl;
        
        for (int j = 0; j < size - i - 1; j++) // For comparisons
        {
            if (A[j] > A[j + 1])
            {
                int temp = 0;
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;

            }
        }
        
    }
}

int main()
{   
    // int A[] = {1,2,3,4,5,6,7};
    int A[] = {12, 38, 37, 89, 27, 33};
    int Size = sizeof(A) / sizeof(int);

    cout << "Array before Sort : ";
    print(A, Size);
    bubblesort(A, Size);
    cout << "Array after Sort : ";
    print(A, Size);

    cout<<endl;

    return 0;
}