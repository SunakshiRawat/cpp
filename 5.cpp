#include<iostream>
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
        y=6;
        cout<<x*y;
    }
};

int main ()
{
    B ob;
    ob.display();
    return 0;
}