#include<bits/stdc++.h>
#define ll long long int
const ll MOD= 1e9+7;
using namespace std;
ll powerLL(ll x, ll n)
{
    ll result = 1;
    while (n) {
        if (n & 1)
            result = result * x % MOD;
        n = n / 2;
        x = x * x % MOD;
    }
    return (result-1)%MOD;
}
 

signed main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll ans=powerLL(2,n);
		ll kk= powerLL(ans,k)+1;
		cout<<kk<<"\n";
	}
}

