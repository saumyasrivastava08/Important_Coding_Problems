#define ll long long 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ll n,k;
	cin>>n>>k;
	
	ll j= n%10;
	while(k--)
	{
		if(j==0)
		{
			n=n/10;
			j=n%10;
		}
		else
		{
			n=n-1;
			j=n%10;
		}
	}
	cout<<n;
	
}
