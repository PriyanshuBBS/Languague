#include <iostream>
using namespace std;
class Employee
{
public:
    int id;

    Employee() {} // It is made when compilor checks it not show error that id is not created
};                // When derived class made base class's constructor called

class Programmer : public Employee
{
public:
    int salary;

    Programmer() {}

    Programmer(int SAL)
    {
        salary = SAL;
    }
};

int main()
{
    Programmer Priyanshu(100);

    Priyanshu.id = 1;

    cout << "ID " << Priyanshu.id << endl; // Using Members of Other class
    cout << "Salary " << Priyanshu.salary << endl;

    return 0;
}