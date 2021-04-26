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
	int count =0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
		   swap(arr[i],arr[count]);
		    count++;
			  
		}
		
	}
 //  reverse(arr,arr+n);
  for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
}
