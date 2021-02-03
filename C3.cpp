#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int h=(n*2-1)/2;
    for(int i=0;i<n;i++)
    {
        for(int j=-h;j<=h;j++)
        {
            if(j>=(-i) && j<=(i)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
