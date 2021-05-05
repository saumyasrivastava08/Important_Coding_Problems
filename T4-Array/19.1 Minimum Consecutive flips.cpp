//Given a binary array, we need to find the minimum of number of group flips to make all array elements same. 
// In a group flip, we can flip any set of consecutive 1s or 0s.
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
   	for(int i = 1; i < n; i++)
	{
		if(arr[i] != arr[i - 1])
		{
			if(arr[i] != arr[0])
                cout << "From " << i << " to ";
			else
                cout << i - 1 << endl;
		}
	}

	if(arr[n - 1] != arr[0])
        cout << n - 1 << endl;

}
