/*Static Functions: - It can acess only Static Member
   - Can be Used without creating object*/

#include<iostream>
using namespace std;
class India{
    public:
    static void display(){
        cout<<"Hello Mam\n";
    }

};

int main (){
    India :: display();  // Calling Function without Object of Class
return 0;
}
