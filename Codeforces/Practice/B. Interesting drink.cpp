#define ll long long 
#include<bits/stdc++.h>
using namespace std; 
int main()
{
	ll n;
	cin>>n;
	vector<int>arr;
	ll a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
	sort(arr.begin(),arr.end());
	vector<int> :: iterator it ;
	ll q;
	cin>>q;
	ll b;
	vector<int>ab;
	for(int i=0;i<q;i++)
	{
		cin>>b;
		it = upper_bound(arr.begin(),arr.end(),b);
		ab.push_back(it-arr.begin());
	}
	for(int i=0;i<q;i++)
	{
		cout<<ab[i]<<endl;
	}
}
