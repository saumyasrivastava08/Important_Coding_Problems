#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>

ll poo(ll n)
{
   ll p = (ll)log2(n);
   return (ll)pow(2, p);
}
using namespace std;
int main()
{
	bsdk;
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll k = poo(n) - 1;
		cout<<k<<endl;
	}
	
}
