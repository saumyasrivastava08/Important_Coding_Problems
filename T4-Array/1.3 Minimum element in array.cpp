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
	int min=arr[0];
	for(int i=1;i<n;i++)
	{
        if(min>arr[i])
          min=arr[i];
        
	}
	cout<<"Minimum element in the array "<<"\n" <<min;

}
