// Iterative C++ program to reverse an array
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
	cout<<"After Reversing the array "<<"\n";
	for(int i=n-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
}
