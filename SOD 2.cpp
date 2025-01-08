#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) (v).begin(),(v).end()
ll SumofDivisors(ll n)
{
    ll total=1;
    for(ll i=2;(ll)i*i<=n;i++)
    {
        if(n%i==0)
        {
            ll cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }

            ll sum=0,pow=1;
            cnt++;
            while(cnt>0)
            {
                sum+=pow;
                pow*=i;
                cnt--;
            }
            total*=sum;
        }
    }

    if(n>1)
    {
        total *= (1+n);
    }

    return total;
}
void solve()
{
    ll n;
    cin>>n;
    ll ans=SumofDivisors(n);
    cout<<ans<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
       solve();

    }
}
