#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream out;
    out.open("Sample.txt");
    out << "Hello open() function\n";
    out << "I am Priyanshu";
    out.close();

    string st;
    ifstream in;
    in.open("Sample.txt");
    // getline(in, st);
    // cout << st << endl;

    while (in.eof() == 0)   //Reading full file
    {
        getline(in, st);
        cout << st << endl;
    }

    in.close();
    return 0;
}