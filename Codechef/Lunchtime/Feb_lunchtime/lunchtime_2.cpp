#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
			long long a;
         	vector<int>arr;
         	for(int i=0;i<10;i++)
         	{
         		cin>>a;
         		arr.push_back(a);
			}
			long long k ,sum=0;
			cin>>k;
			for(int i=9;i>=0;i--)
			{
				if(k>=arr[i])
				{
				k=k-arr[i];
				arr[i]=0;
			}
				else
				{
				arr[i]=arr[i]-k;
				k=0;
				break;
				}
			}
			for(int i=9;i>=0;i--)
			{
				if(arr[i]!=0)
				{
					cout<<i+1<<"\n";
					break;
				}
			}
	}
}
