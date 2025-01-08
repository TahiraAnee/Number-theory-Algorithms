#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) (v).begin(),(v).end()
const ll N=1e6+9;
int spf[N];
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i=2;i<N;i++)
    {
        spf[i]=i;
    }
    for(int i=2;i<N;i++)
    {
        for(int j=i;j<N;j+=i)
        {
            spf[j]=min(spf[j],i);
        }
    }
    ll t; // queries q<=1e6
    cin >> t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>ans;
        while(n>1)
        {
            ans.push_back(spf[n]);
            n/=spf[n];
        }
        for(auto &u:ans)cout<<u<<" ";
        cout<<endl;
    }
}
