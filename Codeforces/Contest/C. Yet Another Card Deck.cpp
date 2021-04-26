#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll n,k;
	cin>>n>>k;
	vector<int>arr(n);
	vector<int>q(k);
	for(int i=0;i<n;i++)
	  cin>>arr[i];
    for(int i=0;i<k;i++)
	  cin>>q[i];
	for(int i=0;i<k;i++)
	{
		for(int it=0;it<n;it++)
		{
		
			if(q[i]==arr[it])
			{
				cout<<(it+1)<<" ";
				ll k = arr[it];
				arr.erase(arr.begin()+it);
				auto itt = arr.insert(arr.begin(),k);
				break;
			}
			
		}
	}  
}
