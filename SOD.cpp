#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=1;
    for(int i=2;i*i<=n;++i)
    {
        int power=0;
        while(n%i==0){
            ++power;
            n/=i;
        }
        int m=(power+1);
        sum=sum*(pow(i,m)-1)/(i-1);
    }
    if(n>1)
    {
        sum=sum*(pow(n,2)-1)/(n-1);
    }

    cout<<sum<<endl;
}
