// *****************     Friend Functions     ***************

#include <iostream>
using namespace std;

class complex
{

  int a, b;

public:
  
  friend complex sumcomplex(complex o1,complex o2);   // A decleration is needed here for Friend 
  
  void setnumber(int x, int y)
  {
    a = x;
    b = y;
  }

  void display()
  {
    cout << "Complex Number is " << a << " + " << b << "i" << endl;
  }
};

complex sumcomplex(complex o1, complex o2)   // Returning the object, Hence the return type is class
{                                            // If not returning, Then it is void <return type>
  complex o3;
  o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
  return o3;
}

int main()
{
  complex c1, c2, sum; // 2 variables created.
  c1.setnumber(2, 3);  // 1st Complex Number
  c1.display();

  c2.setnumber(2, 4); // 2nd Complex Number
  c2.display();

  sum = sumcomplex(c1, c2);
  sum.display();
  return 0;
}