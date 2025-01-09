#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) (v).begin(),(v).end()
ll power(ll x,unsigned long long int y,ll p)
{
    ll res=1;
    x=x%p;
    if(x==0) return 0;
    while(y>0)
    {
        if(y&1)
        {
            res=(res*x)%p;
        }
        y=y>>1;
        x=(x*x)%p;

    }

    return res;
}
ll modInverse(ll a,ll m)
{
    return power(a,m-2,m);
}
ll modDiv(ll a,ll b,ll m)
{
    a=a%m;
    ll inv=modInverse(b,m);

    return (inv*a)%m;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
        ll a,b,m;
        cin>>a>>b>>m;
        ll ans=modDiv(a,b,m);
        cout<<ans<<endl;
    
}
