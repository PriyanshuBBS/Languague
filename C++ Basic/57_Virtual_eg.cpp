#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
public:
    string title;
    int rating;

    CWH(string s, int r)
    {
        title = s;
        rating = r;
    }

    virtual void display() // If not virtual then this f(x) will run
    {
        cout << "Base class's function\n";
    }
};

class Video : public CWH
{
public:
    int videolength;
    Video(string s, int r, int vl) : CWH(s, r)
    {
        videolength = vl;
    }

    // void display()
    // {
    //     cout << "Video Title: " << title << endl;
    //     cout << "Rating of video: " << rating << "/5" << endl;
    //     cout << "Length of video is " << videolength << " seconds\n";
    // }
};

class Website : public CWH
{
public:
    int words;
    Website(string s, int r, int w) : CWH(s, r)
    {
        words = w;
    }

    void display()
    {
        cout << "Text Title: " << title << endl;
        cout << "Rating of Text: " << rating << "/5" << endl;
        cout << "Word count is " << words << " words\n";
    }
};

int main()
{
    string title;
    int words, videolen, rate;

    // For video
    title = "Cpp Tutorial";
    rate = 4;
    videolen = 1920;

    Video Cpp(title, rate, videolen);
    // Cpp.display();

    // Text

    title = "Cpp Text Tutorial";
    rate = 4;
    words = 289;

    Website CppT(title, rate, words);
    // CppT.display();

    CWH *ptr[2];

    ptr[0] = &Cpp;
    ptr[1] = &CppT;

    ptr[0]->display();
    ptr[1]->display();

    return 0;
}