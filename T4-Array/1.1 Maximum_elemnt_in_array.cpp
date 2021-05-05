//  C++ program to find maximum element in array(Efficient method)
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
	int max=arr[0];
	for(int i=1;i<n;i++)
	{
        if(max<arr[i])
          max=arr[i];
        
	}
	cout<<"Maximum element in the array "<<"\n" <<max;

}
