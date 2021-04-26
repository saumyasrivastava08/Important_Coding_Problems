#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll n,s;
	cin>>s>>n;
	ll f=1;
	ll x,y;
	vector<pair<ll,ll>>arr;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		arr.push_back({x,y});
	}
	sort(arr.begin(),arr.end());
 for(int i=0;i<n;i++)
 {
 	if(arr[i].first<s)
 	{
 		s=s+arr[i].second;
	 }
	 	else
		{
			f=0;
			break;
		}
 }
	
	if(f)
	cout<<"YES";
	else
	cout<<"NO";
}
