/**** Default Constructor - Sum of Number ****/

#include<iostream>
using namespace std;

class number{
    int a, b;
    public:

    number()        // No Return Type  &  Same Name as Class
    {
        a = 10;     // Variables initialize in class with help of constructors
        b = 20;
        cout<<"Sum of Numbers of  "<<a<<" & "<<b<<"  is "<<a+b<<endl;
    }
};

int main (){
   
  number n1;    // Invoked Automatically
  return 0;
}