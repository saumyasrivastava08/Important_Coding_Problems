#define ll long long 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		vector<int>arr(n);
		for(int i=0;i<n;i++)
		 cin>>arr[i];
		 ll l=0,h=n-1;
		 while(l<=h)
		 {
		 	while(k)
		 	{
		 		
				if(arr[l]==0)
				  break;
			 	 arr[l]=arr[l]-1;
			 	// k--;
			
				arr[h]=arr[h]+1;
			
				k--;
			 }
		   l++;
		   h--;
			
			 
		 }
		 for(int i=0;i<n;i++)
		 cout<<arr[i]<<" ";
		 cout<<"\n";
	}
}
