//Leaders in array (Naive solution)
//An element is called the leader of an array if there is no element greater than it on the right side.
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
		bool flag=false;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]<=arr[j])
		  {
		     flag=true;
		     break;
		  }
    	}
		if(flag==false)
		 cout<<arr[i]<<" ";
	}
 
}
