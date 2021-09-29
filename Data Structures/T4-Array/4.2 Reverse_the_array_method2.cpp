// Iterative C++ program to reverse an array(Efficient method)
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
	
	int start= 0;
	int end=n-1;
	while(start<=end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
		
	}
	cout<<"After Reversing the array "<<"\n";
	for(int i=0;i<n;i++)
	{
	cout<<arr[i]<<" ";
	}
}
