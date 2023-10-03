#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool a[n+3];
    memset(a,true,sizeof(a));
    for(int i=2;i<=sqrt(n);i++)
    {
        if(a[i]==true)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                a[j]=false;
            }

        }
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i])
            cout<<i<<" ";
    }
    cout<<endl;
}
