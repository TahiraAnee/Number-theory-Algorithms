#include<bits/stdc++.h>
using namespace std;
int main()
{

   /* int n;
    while(cin>>n)
    { bool is_prime=true;
        if(n==1)
            is_prime=false;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            is_prime=false;
            break;
        }
    }
    if(is_prime==true)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    }*/
    int n;
    cin>>n;
    vector<int>prime_factors;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            prime_factors.push_back(i);
            n/=i;
        }
    }
    if(n>1)
    {
        prime_factors.push_back(n);
    }
    for(int prime:prime_factors)
        cout<<prime<<" ";


}
