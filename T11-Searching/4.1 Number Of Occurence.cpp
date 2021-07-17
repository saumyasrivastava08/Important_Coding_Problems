
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
ll firstOc(vector<int>&arr,ll x, ll n)
{
		ll l=0,h=n-1,m=0,jj=-1;
	while(l<=h)
	{
		m =  l+(h-l)/2;
		if(arr[m]<x)
		l=m+1;
		else if(arr[m]>x)
		h=m-1;
		else
		{
			if(m==0||arr[m]!=arr[m-1])
			{
			     jj= m;
			     break;
			}
			else
			{
				h=m-1;
			}
		}
		
	}
	return jj;
}
ll lastOc(vector<int>&arr,ll x, ll n)
{
	ll l=0,h=n-1,m=0;
	while(l<=h)
	{
		m =  l+(h-l)/2;
		if(arr[m]<x)
		l=m+1;
		else if(arr[m]>x)
		h=m-1;
		else
		{
			if(m==(n-1)||arr[m]!=arr[m+1])
			{
				 return m;
			}
			else
			{
				l=m+1;
			}
		}
		
	}
}
int main()
{
	ll n;
	cout<<"Enter number of elements \n";
	cin>>n;
	ll x;
	cout<<"Enter the number to which we have to find its number of occurence \n";
	cin>>x;
	vector<int>arr(n);
	cout<<"Enter numbers in Sorted Order \n";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	ll k = firstOc(arr,x,n);
	ll j= lastOc(arr,x,n);
	if(k==-1)
	cout<<"Number not exist \n";
	else
	cout<<x<<" "<<"Occurs"<<" "<<abs(k-j)+1<<" times";
}
