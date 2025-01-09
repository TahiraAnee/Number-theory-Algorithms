#include<bits/stdc++.h>
using namespace std;
const int mx = 1e8 + 123;
bitset<mx> is_prime;
vector<ll> prime;
void primeGen(int n)
{
    n += 100;
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
}
int main()
{
    int n;
    cin>>n;
    bool a[n+3];
    memset(a,true,sizeof(a));
    for(int i=2;i<=sqrt(n);i++)
    {
        if(a[i]==true)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                a[j]=false;
            }

        }
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i])
            cout<<i<<" ";
    }
    cout<<endl;
}
