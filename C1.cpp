#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<2)
    {
        cout<<"no";
    }
    else
    {
        int KT=0;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                KT=1;
                break;
            }
        }
        if(KT==1) cout<<"no";
        else cout<<"yes";
    }
}
