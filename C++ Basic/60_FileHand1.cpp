#include<iostream>
#include<fstream>
using namespace std;

int main (){
    // //Opening file using constructor and writing it
    // string st = "Priyanshu Bhai";

    // ofstream out("Sample.txt"); //Writing Operation in file, A class ofstream having object "out"
    // out<<st;    //Will write in file


    //Opening file using constructor and reading it
    string st ;

    ifstream input("Sample.txt"); 
    // input>>st;    //Will read in file, not spaces and new line
    getline(input,st);  //getline(<object>,<string>)
    cout<<st<<endl;

return 0;
}