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
    int f=1;
    
	for(int i=1;i<n;i++)
	{
		if(arr[f-1]!=arr[i])
		{
			arr[f]=arr[i];
			f++;
			
		}
		
	}
 
  for(int i=0;i<f;i++)
     cout<<arr[i]<<" ";
}
