// #include<iostream>
// using namespace std;

// class A{
//     int a, b;
//     public:

//     A(int x,int y){
//         cout<<"Sum of Values is "<<x + y<<endl;
//     }
// };

// int main (){
//     A o(2,3);
    
// return 0;
// }

#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

class Point{
    int a,b;
    public:
    friend void distance(Point p1,Point p2);
    Point(int x,int y){     // Paramtrized Constructor Initialize the Points
        a = x;
        b = y;
    }

    void display(){
        cout<<"The point is ("<<a<<","<<b<<")"<<endl;
    }
};

void distance(Point p1,Point p2){
    double dis = 0;
    dis = sqrt(pow((p2.a - p1.a),2)  + pow((p2.b - p1.b),2));
    cout<<"The distance between two points is "<<setprecision(3)<<dis<<" units\n";
}

int main (){
    Point A(1,0);
    A.display();

    Point B(70,0);
    B.display();

    distance(A,B);

return 0;
}