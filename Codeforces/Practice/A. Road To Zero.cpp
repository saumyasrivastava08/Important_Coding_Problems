#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x,y,a,b;
		cin>>x>>y>>a>>b;
		if(x==y)
		{
			ll k =0;
			k= x*b;
			ll pp =0;
			pp = (x*a) + (y*a);
			if(k<pp)
			cout<<k<<endl;
			else
			cout<<pp<<endl;
		}
		else
		{
			ll mm= min(x,y);
			ll jj=0;
			jj = (abs(x-y)*a)+(mm*b);
			ll pp= 0;
			pp = (x*a) + (y*a);
			if(jj<pp)
			cout<<jj<<endl;
			else
			cout<<pp<<endl;
		}
	}
}
