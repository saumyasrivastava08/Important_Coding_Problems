//Leaders in array (Efficient solution)
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
	int cl=arr[n-1];
	cout<<cl<<" ";
	
	for(int i=n-2;i>=0;i--)
	{
	
		 if(arr[i]>cl)
		  {
		     cl=arr[i];
		     cout<<arr[i]<<" ";
		  }
    	
		
	}
 
}
