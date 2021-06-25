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
		ll d,D,p,q;
		cin>>D>>d>>p>>q;
		ll kk=1,k=0,i=0,t=1,j=d,qq=q;
		ll f=((D/d-1)*(D/d))/2;
		ll io=(d*(D/d)*p)+(q*(d)*f);
		if(D%d==0)
		cout<<io<<"\n";
		else if(D%d!=0)
		{
			cout<<(io)+(D%d*(p+(D/d*q)))<<"\n";
		}
	}
}

