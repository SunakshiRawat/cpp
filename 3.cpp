// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class A{
    public:
        int a[10],s=0;
        A(int n){
            for(int i=0;i<n;i++)
            {
                cout<<"enter : ";
                cin>>a[i];
                
                if(a[i]>0)
                {
                    s+=a[i];
                }
            }
        }
        A(A &t)
        {
            cout<<"SUM : "<<t.s;
        }
};

int main() {
    A oa(5);
    A ob(oa);
    return 0;
}