#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int>arr;
		for(int i=n;i>k;i--)
		{
			arr.push_back(i);
		}
		int sum=0;
		for(int i=1;i<k;i++)
		{
			sum=k-i;
			
		}
		int size=arr.size();
		cout<<size<<"\n";
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	
}
