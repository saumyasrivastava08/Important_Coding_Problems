#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll n;
	cin>>n;
	map<string,int>mp;
	ll i=0;string s;
	while(i<n)
	{
		
		cin>>s;
       mp[s]++;
       i++;
	}
	
    ll max=0;
	for(auto it:mp)
	{
		if(it.second>max)
		{
			max=it.second;
			s= it.first;
		}
	}
	cout<<s;
	
}
