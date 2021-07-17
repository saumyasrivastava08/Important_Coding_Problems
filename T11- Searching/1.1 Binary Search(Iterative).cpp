#include <bits/stdc++.h>
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
using namespace std;
//Sorted Array Only
int main()
{
	bsdk;
	ll n;
	cout<<"Enter no of values in array \n";
	cin>>n;
	
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	cin>>arr[i];
	ll x;
	cout<<"Enter the value to find in array \n";
	cin>>x;
	
	ll l=0,h=n-1;
	while(l<=h)
	{
		ll m = l + (h-l)/2;
		if(arr[m]==x)
		{
			cout<<"Index of the Value is "<<m<<"\n";
			break;
		}
		else if(arr[m]<x)
		l= m+1;
		else
		h = m -1 ;
	}

}
