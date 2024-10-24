//Display the sum of first n natural numbers using default constructor
#include <iostream>
using namespace std;

class A{
    public:
    int n;
    int s;
    int i;
    
    A ()
    {
        n=5;
        s=0;
        
        for(i=1;i<=n;i++)
        {
            s=s+1;
        }
        cout<<"sum of "<<n<<"natural numbers: "<<s;
    }
};

int main()
{
    A ob;

    return 0;
}