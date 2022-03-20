#include<iostream>
using namespace std;

class Bank{
    float a;
    float b;
    int p;
    int q;

    public:
        Bank(float m,float n){
            a = m;
            b = n;
            cout<<"Sum of Float values is "<<a+b<<endl;
        }

        Bank(int x,int y){
            p = x;
            q = y;
            cout<<"Sum of Int is "<<x + y<<endl;
        }
};


int main (){
    int a,b,n;
    float c,d;

    cout<<"1. Float sum   2. Int Sum\n";
    cin>>n;

    if(n==1){
        cout<<"Enter Float Numbers";
        cin>>c>>d;
        Bank b1(c,d);
    }
    else{
        cout<<"Enter Int Numbers";
        cin>>a>>b;
        Bank b2(a,b);
    }

return 0;
}