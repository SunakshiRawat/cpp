#include <iostream>
using namespace std;

class A{
    public:
        int a;
        int b;
        int temp;
    
    A(int x,int y)
    {
        a=x;
        b=y;
        
        cout<<"Before swap:"<<a<<" "<<b<<endl;
    
    temp=a;
    a=b;
    b=temp;
    
    cout<<"after swap:"<<a<<" "<<b<<endl;
    }
};
int main()
{
    A ob(5,6);
}