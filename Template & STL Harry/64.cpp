// Program to dot product using (Template Basic)

#include <iostream>
using namespace std;

template <class T>
class vector
{

public:
    T *ptr; // int pointer
    int size;

    vector(int m) : size(m)
    {
        ptr = new T[size];
    }

    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + this->ptr[i] * ptr[i]; // Multiplying components of vectors
        }
        return d;
    }
};

// class vector
// {

// public:
//     int *ptr; // int pointer
//     int size;
//     vector(int m) : size(m)
//     {
//         ptr = new int[size];
//     }

//     int dotProduct(vector &v)
//     {
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d = d + this->ptr[i] * ptr[i]; // Multiplying components of vectors
//         }
//         return d;
//     }
// };
int main()
{
    vector<float> v1(3); // 3D vector
    v1.ptr[0] = 1.2;
    v1.ptr[1] = 1.1;
    v1.ptr[2] = 1.8;

    vector<float> v2(3);    // Using Templates
    v1.ptr[0] = 2.7;
    v1.ptr[1] = 8.2;
    v1.ptr[2] = 2.1;

    float a = v1.dotProduct(v2);
    cout << "The dot product of v1 (10i + 11j + 12k) and v2 (22i + 82j + 21k) is: " << a << endl;

    //****** Intial Program
    // vector v1(3); // 3D vector
    // v1.ptr[0] = 10;
    // v1.ptr[1] = 11;
    // v1.ptr[2] = 12;

    // vector v2(3);
    // v1.ptr[0] = 22;
    // v1.ptr[1] = 82;
    // v1.ptr[2] = 21;

    // int a = v1.dotProduct(v2);
    // cout << "The dot product of v1 (10i + 11j + 12k) and v2 (22i + 82j + 21k) is: " << a << endl;

    // ******** Using templates
    return 0;
}