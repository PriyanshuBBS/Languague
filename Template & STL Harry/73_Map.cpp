// ****** Map ****** 
// Used to store Keyvalue pairs

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main (){
    map <string,int> distance;
    distance["Shirdi"] = 1250;
    distance["Odisha"] = 1300;

    distance.insert({{"Kannauj",420},{"Shimla",370}});

    map <string,int> :: iterator itr;

    for(itr = distance.begin();itr!= distance.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;      //first will give key and second will give value
                                                          //*itr will only point to the pair
    }

    cout<<"The size of Map is : "<<distance.size()<<endl; 
    cout<<"The Max size of Map is : "<<distance.max_size()<<endl; 
    cout<<"Is it empty? "<<distance.empty()<<endl; 
return 0;
}