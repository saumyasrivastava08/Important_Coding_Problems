#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
			ll k =0;
		if(n<2050)
		cout<<-1<<"\n";
		else if(n==2050)
		cout<<1<<"\n";
		else  if(n>2050)
		{
		    ll ff=0;
		    while(n>=2050)
		    {
		    	ll x=2050;
				while(x*10<=n)
				{
					x=x*10;
				}
				ff = ff + (n/x);
				n = (n%x);
		}
			if(n==0)
				cout<<ff<<endl;
				else
				cout<<-1<<endl;
			
				
			
		}
	}
}
