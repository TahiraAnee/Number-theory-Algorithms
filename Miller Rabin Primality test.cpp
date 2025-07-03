#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) (v).begin(),(v).end()
/* Custom hash function for pair<ll, ll>
struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const {
        return hash<T1>()(p.first) ^ (hash<T2>()(p.second) << 1);
    }

}; */
ll power(ll x,unsigned int y,ll p)
{
    ll res=1;
    x=x%p;
    while(y>0)
    {
        if(y&1) res=(res*x)%p;

        y=y>>1;
        x=(x*x)%p;
    }

    return res;
}
bool millerTest(ll d,ll n)
{
    ll a= 2+rand()%(n-4);
    ll x=power(a,d,n);

    if(x==1 || x==n-1) return true;

    while(d!=n-1)
    {
        x=(x*x)%n;
        d*=2;
        if(x==1)return false;
        if(x==n-1)return true;
    }
}
bool is_prime(ll n,ll k)
{
    if(n<=1 || n==4) return false;
    if(n<=3)return true;

    ll d=n-1;
    while(d%2==0)d/=2;

    for(ll i=0;i<k;i++)
    {
        if(!millerTest(d,n))
        {
            return false;
        }
    }
    return true;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    set<ll>prime;
    for(ll i=2;i<=n;i++)
    {
        if(is_prime(i,4))
        {
            prime.insert(i);
            //tc=O(k*log(n));
        }
    }
    cout<<prime.size()<<endl;
    for(auto &u:prime)
    {
        cout<<u<<" ";
    }cout<<endl;
}
