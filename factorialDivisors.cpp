#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) (v).begin(), (v).end()
const int mx = 1e8 + 123;
bitset<mx> is_prime;
vector<ll> prime;
void primeGen(int n)
{
    //n += 100;
    for (int i = 3; i <= n; i += 2)
        is_prime[i] = 1;
    ll sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2)
    {
        if (is_prime[i] == 1)
        {
            for (int j = i * i; j <= n; j += (i + i))
            {
                is_prime[j] = 0;
            }
        }
    }
    is_prime[2] = 1;
    prime.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        if (is_prime[i] == 1)
            prime.push_back(i);
    }

    // for(auto &u:prime)cout<<u<<" ";
    // cout<<endl;
}
ll falctorialDivisor(ll n)
{
    ll cnt=1;
    for(auto &u:prime)
    {
        if(u<=n)
        {
            ll c=u;
            ll k=0;
            while(c<=n)
            {
                k+=n/c;
                c*=u;
            }

            cnt=cnt*(k+1);

        }else
        {
            break;
        }
    }

    return cnt;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    primeGen(1000000);
    ll n;
    cin>>n;
    ll ans=falctorialDivisor(n);
    cout<<ans<<endl;
}
