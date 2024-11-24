//Display the sum of two numbers using multiple inheritance where one number is declared in first base class and one number declared in second base class. Function is defined in the derived class to sum two numbers.

#include <iostream>
using namespace std;

class A{
    public:
    int x;
    int y;
    
};
class B:public A{
    public:
    void display()
    {
        x=5;
        cout<<x<<endl;
    }
};
class C:public A{
    public:
    void display()
    {
        y=10;
        cout<<y<<endl;
    }
};
    
int main()
{
    B ob1;
    C ob2;
    ob1.display();
    ob2.display();
}
