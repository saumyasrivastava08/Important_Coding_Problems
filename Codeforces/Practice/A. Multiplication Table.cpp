#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll n,x;
	cin>>n>>x;
	ll i=1,j=0;
	while(i<=n)
	{
		ll p =0;
		p=i*n;
		if(x<=p)
		{
			if(x%i==0)
			{
				j++;
			}
		}
		i++;
	}
	cout<<j;
}
