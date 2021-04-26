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
		ll c1=0,c2=0,c3=0,c=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==1 || arr[i]==3)
			{
				 c++;
			//	 c1++;
			}
		   
			 
			
		}
		cout<<c<<endl;
		
	}
}
