#include<iostream>
#include<string.h>
using namespace std;

void del_bom(void);
void bbi_del(void);
void del_blr(void); // Hi git Log

int main(){
    char src[10],des[10];
    char del[5]="DEL",bom[5]="BOM",blr[5]="BLR",bbi[5]="bbi";
    int date;
    
    cout<<"\n\n\t\t ************     Airlines Reservation System [Priyanshu & Gaurav]  ************ \n\n";
    cout<<"Available Routes : 1. Delhi(DEL) - Mumbai(BOM)  2. Delhi(Del) - BLR(Bangalore)  3. Bhubaneswar(BBI) - Delhi(DEL)\n\n";
    cout<<"Source: "; cin>>src;
    cout<<"Destination: "; cin>>des;
    cout<<"Date of Journey: "; cin>>date;
    
    if(strcmp(src,del)==0 && strcmp(des,bom)==0){
            del_bom();
    }
    
    else if(strcmp(src,bbi)==0 && strcmp(des,bom)==0){
            bbi_del();
    }

    else if (strcmp(src,del)==0 && strcmp(des,blr)==0){
            del_blr();
    }
    
    return 0;
}

void del_bom(void){
    cout<<"\n\t   Fligt No.\t   Airlines \t         Time          \t Fare\n";
    cout<<"\t    AI 665  \t  Air India \t   8:00 AM - 10:10 AM  \t 4,300\n";
    cout<<"\t    UK 993  \t   Vistara  \t   1:00 PM -  3:00 PM  \t 4,500\n";
    cout<<"\t   6E 6261  \t    Indigo  \t   7:45 PM - 10:00 PM  \t 4,800\n\n";
}

void bbi_del(void){
    cout<<"\n\t Fligt No.\t   Airlines \t      Time         \t Fare\n";
    cout<<"\t    UK 782  \t   Vistara  \t   20:30 - 22:40   \t 4,300\n";
    cout<<"\t   6E 2046  \t    Indigo  \t   19:30 - 21:45   \t 4,300\n";
    cout<<"\t   AI 474   \t  Air India \t   21:30 - 23:40   \t 4,100\n\n";
}

void del_blr(void){
    cout<<"\n\t Fligt No.\t   Airlines \t      Time        \t Fare\n";
    cout<<"\t    AI 665  \t  Air India \t   8:00 - 10:10   \t 4,300\n";
    cout<<"\t    UK 993  \t   Vistara  \t  13:00 - 15:00   \t 4,500\n";
    cout<<"\t   6E 6261  \t    Indigo  \t  19:45 - 22:00   \t 4,800\n\n";
}