#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll p=0;
	for(ll i=1;i<n;i++)
	{
		if(s[i]==s[i-1])
		p++;
	}
	cout<<p;
}

