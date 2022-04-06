// ****** Comand Line Arguments *******


#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

    if (argc == 1)
    {
        cout << "\nOnly Program Name is passed \n";
    }

    cout << "Program Name is " << argv[0] << "\n\n";

    if (argc > 2)
    {
        cout << "No of Arguments passed is/are : " << argc << endl;

        cout << "The Arguments are ";

        for (int i = 0; i < argc; i++)
        {
            cout << i + 1 << " argument is " << argv[i] << endl;
        }
    }
    cout<< "\n\n";
    return 0;
}

// How to Enter Command Line Args. ---> .\ <filename.exe> <arg 1> <arg 2> ... <arg n>