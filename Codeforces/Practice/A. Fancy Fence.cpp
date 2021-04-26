#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll n;
	cin>>n;
	while(n--)
	{
		ll a;
		cin>>a;
		ll k = 360 % (180-a);
		if(k==0)
		cout<<"YES"<<"\n";
		else
		cout<<"NO"<<"\n";
	}
}
