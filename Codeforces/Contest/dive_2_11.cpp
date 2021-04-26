#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll r=n,l=1;
		
		if(n<3 &&k!=0)
		{
			cout<<"-1\n";
			continue;
		}
		if(k==0)
		{
			for(int i=1;i<=n;i++)
			cout<<i<<" ";
			cout<<"\n";
			continue;
		}
		ll c=ceil(n/2.0)-1;
		vector<int>arr;
			if(k>c)
			{
				cout<<"-1\n";
				continue;
			}
			else
			{
				while(k--)
				{
					arr.push_back(l);
					arr.push_back(r);
					l++;
					r--;
				}
				if(arr.size()!=n)
				{
					for(int i=arr.size()-1;i<n;i++)
					{
						arr.push_back(l);
						l++;
					}
				}
			}
		for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
		cout<<"\n";
	}
}
