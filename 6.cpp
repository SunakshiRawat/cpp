#include<iostream>
using namespace std;

class A{
    public:
    int x;
};
class B:public A{
    public:
    int y;
};
class C:public B{
    public:
    void display()
    {
        x=5;
        y=10;
        cout<<x+y;
    }
};

int main()
{
    C ob;
    ob.display();
}