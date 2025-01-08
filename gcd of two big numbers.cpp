#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) (v).begin(),(v).end()
ll gcd(ll a,ll b)
{
    if(a==0) return b;
    if(b==0) return a;
    if(a<b) swap(a,b);

    return gcd(a%b,b);
}

ll reduceB (ll a,string s)
{
    ll mod=0;

    for(int i=0;i<s.size();i++)
    {
        mod = (mod*10 + s[i]-'0')%a;
    }

    return mod;
}
ll gcdLarge(ll a,string s)
{
    ll num =reduceB(a,s);

    return gcd(a,num);
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a;
    cin>>a;
    string b;
    cin>>b;
    if(a==0) cout<<b<<endl;
    else cout<<gcdLarge(a,b)<<endl;
}
