//
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr;
	int n,a;
	cout<<"No. of elements in array"<<"\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			for(int j=i+1;j<n;j++)
			  {
			  	if(arr[j]!=0)
			      swap(arr[i],arr[j]);
			  }
		}
		
	}
 
  for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
}
