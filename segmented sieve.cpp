#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) (v).begin(), (v).end()
/* Custom hash function for pair<ll, ll>
struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const {
        return hash<T1>()(p.first) ^ (hash<T2>()(p.second) << 1);
    }
}; */
const int mx = 1e7+10;
bitset<mx> is_prime;

void primeGen(int n)
{
  
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
    
}
vector<ll> createPrime(ll R)
{
    vector<ll>prime;
    prime.pb(2);
    for (int i = 3; i <= R; i += 2)
    {
        if (is_prime[i] == 1)
            prime.push_back(i);
    }

    return prime;
    
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    primeGen(mx);// generate all primes till sqrt(R);
    ll t;
    cin>>t;
    while(t--)
    {
        ll L,R;
        cin>>L>>R;
         vector<ll>prime=createPrime(sqrt(R));
        //step2
        // create a dummy array of size r-l+1 and store 1 in every element

        ll dummy[R-L+1];
        for(ll i=0;i<=R-L+1;i++)
        {
            dummy[i]=1;
        }
        //step 3
        for(auto &u:prime){
            ll first_multiple= (L/u)*u;
            if(first_multiple<L)first_multiple+=u;

            for(ll j=max(first_multiple,u*u);j<=R;j+=u)
            {
                dummy[j-L]=0;
            }
        }

        // step 4
        for(ll i=L;i<=R;i++)
        {
            if(dummy[i-L]==1)
            {
                cout<<i<<" ";
            }else continue;
        }cout<<endl;
    }

   
}
