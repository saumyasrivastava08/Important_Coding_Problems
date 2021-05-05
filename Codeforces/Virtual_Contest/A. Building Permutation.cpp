#define ll long long 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ll n;
	cin>>n;
	vector<int>v(n);
	for(ll i=0;i<n;i++)
	cin>>v[i];
	sort(v.begin(),v.end());
	ll k = 1,j=0;
	for(ll i=0;i<n;i++)
	{
		
			j = j+ abs(v[i]-i-1);
		
	
	}
	cout<<j<<endl;
}
