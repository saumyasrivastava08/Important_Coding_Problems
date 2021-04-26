#define ll long long
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ll n,k;
	cin>>n>>k;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	ll pp=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=arr[k-1] && arr[i]>0)
		 pp++;
	}
	cout<<pp;
}
