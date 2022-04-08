#include<iostream>
using namespace std;

template <class T>
class Priyanshu{
  
    public:
      T data;
        Priyanshu(T x){
            data = x;
        }

        void display();

};

// Defining function outside class in class Template

template <class T>
void Priyanshu<T> :: display(){
    cout<<data<<endl;
}

int main (){
    Priyanshu <int> p(10);
    cout<<p.data<<endl;
    p.display();
return 0;
}