#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll n,m;
	cin>>n>>m;
	string x,y;
	map<string ,string>mp;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		if(x.length()<=y.length())
		mp[x]=x;
		else
		mp[x]=y;
	}
	string pp;
	for(int i=0;i<n;i++)
	{
		cin>>pp;
	   cout<<mp[pp]<<" ";
	}
}
