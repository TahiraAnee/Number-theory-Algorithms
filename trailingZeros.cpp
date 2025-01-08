#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) (v).begin(),(v).end()
ll trailing_zero(ll n)
{
    ll i=5;
    ll cnt=0;
    while(n/i>=1)
    {
        cnt+=n/i;
        i*=5;
    }

    return cnt;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        ll ans=trailing_zero(n);
        cout<<ans<<endl;
    }
}
