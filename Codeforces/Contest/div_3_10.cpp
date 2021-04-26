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
			vector<int>brr(n);
		for(int i=0;i<n;i++)
		  cin>>arr[i];
		
			for(int i=0;i<n;i++)
		      brr[i]=arr[i];
		sort(arr.begin(),arr.end());
		ll k;
		for(int i=1;i<n;i++)
		{
			if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1])
			  {
			     k = arr[i];
			  	break;
			  }
			  else if(arr[i-1]!=arr[i] && arr[i]==arr[i+1])
			  {
			  	k=arr[i-1];
			  	break;
			  }
		}
		for(int i=0;i<n;i++)
		{
			if(brr[i]==k)
			{
				cout<<i+1<<"\n";
				break;
			}
		}
	}
}
