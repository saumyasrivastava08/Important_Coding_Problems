#define  ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll n,m;
	cin>>n>>m;
	ll f=0;
	ll k =0;
	k = (n+1)/2;
	ll i = k;
	while(i<=n)
	{
		
		if(i%m==0)
		{
			cout<<i;
			f=1;
			break;
		}
		i++;
	}
	if(!f)
	cout<<-1;
}
