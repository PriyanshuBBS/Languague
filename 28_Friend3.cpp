//********* Example of Friend Function ************

#include<iostream>
using namespace std;
class Y;        // A Forward Decleration is needed because class below (Y) is used

class X{
    int a;
    public:
        void set(int p){
            a = p;
        }
        void display(){
            cout<<"Value of a "<<a<<endl;
        }
        friend void swap(X & o1,Y &o2);     // There is error that class Y is not accesible
};

class Y{
    int b;
    public:
        void set(int p){
            b = p;
        }
        void display(){
            cout<<"Value of b "<<b<<endl;
        }
    friend void swap(X & o1,Y & o2);
};

void swap(X & x,Y & y){
    int temp;
    temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main (){
    X o;
    o.set(1);
    cout<<"Values before Swapping\n\n";
    o.display();
    Y o1;
    o1.set(2);
    o1.display();

    swap(o,o1);

    cout<<"Values after Swapping\n";
    o.display();
    o1.display();


return 0;
}