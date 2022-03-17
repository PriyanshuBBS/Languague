//Array of Objects

#include<iostream>
using namespace std;
class  Store{
    int Item_No,Item_Price;
    public:
        void setprice();
        void displayprice();
};

void Store :: setprice(){
    cout<<"Enter ID of Item: ";
    cin>>Item_No;
    cout<<"Enter Price: ";
    cin>>Item_Price;
}

void Store :: displayprice(){
    cout<<"Item ID "<<Item_No<<endl;
    cout<<"Item Price "<<Item_Price<<endl;
}
int main (){
    int n;

    Store s[n];

    cout<<"Enter the Number of Items to Enter";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        s[i].setprice();
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<"Details of "<<i+1<<"Item\n";
        s[i].displayprice();
    }
    
return 0;
}