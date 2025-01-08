/*Legenders Formula: 
                The largest value of x is the total number of factors,
                that is floor(n!/p)+ floor(n!/p^2) + floor(n!/p^3) + ... and so on 
                till the floor value reaches 0. 
                TC=O(logp(n))
                Largest exponent of p in n! = Sum of (floor(n/(pi)), where i = 1, 2, 3, 4….. and so on.)*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) (v).begin(),(v).end()
ll largestPower(ll n,ll p)
{
    ll cnt=0;
    while(n>0)
    {
        n/=p;
        cnt+=n;
    }
    return cnt;
}
// -------------recursive----------
// int largestPower(int n, int p) {
  
//     // Base Case
//     if (n == 0) 
//         return 0;
  
//     // Recursive Case
//     return n/p + largestPower(n/p, p);
// }
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n,p;
        cin>>n>>p;
        cout<<largestPower(n,p)<<endl;
    }
}
            
