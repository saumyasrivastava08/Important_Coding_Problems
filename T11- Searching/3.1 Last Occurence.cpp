
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll n;
	cout<<"Enter number of elements \n";
	cin>>n;
	ll x;
	cout<<"Enter the number to which we have to find its first occurence \n";
	cin>>x;
	vector<int>arr(n);
	cout<<"Enter numbers in Sorted Order \n";
	for(int i=0;i<n;i++)
	cin>>arr[i];
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
				cout<<"Index of First Occurence is \n"<<m;
				break;
			}
			else
			{
				l=m+1;
			}
		}
		
	}

	
}
