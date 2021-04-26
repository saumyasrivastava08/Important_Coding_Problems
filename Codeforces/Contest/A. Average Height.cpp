#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<int>arr(n);
		for(int i=0;i<n;i++)
		cin>>arr[i];
		vector<int>odd;
		vector<int>even;
		for(int i=0;i<n;i++)
		{
			if(arr[i]%2!=0)
			odd.push_back(arr[i]);
			else
			even.push_back(arr[i]);
		}
		for(int i=0;i<odd.size();i++)
		cout<<odd[i]<<" ";
		for(int i=0;i<even.size();i++)
		cout<<even[i]<<" ";
		cout<<endl;
	}
}
