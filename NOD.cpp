#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num_divisors=1;
    for(int i=2;i*i<=n;++i)
    {
        int power=0;
        while(n%i==0){
            ++power;
            n/=i;
        }
        num_divisors=num_divisors*(power+1);
    }
   // num_divisors=num_divisors*(1+1);// borgomuler cheye boro factorer jonno,emn factor ektai thakte parbe.
    cout<<num_divisors<<endl;
}
