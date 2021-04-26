#include <bits/stdc++.h>
using namespace std;


int maxDiff(vector<int>&arr, int n)
{
	int res = arr[1] - arr[0], minVal = arr[0];

	for(int i = 1; i < n; i++)
	{
		
			res = max(res, arr[i] - minVal);
			
			minVal = min(minVal, arr[i]);
	}

	return res;
}



int main() {
	
       int n,a;
    	cout<<"No. of elements in array"<<"\n";
    	cin>>n;
		vector<int>arr;
	   
	for(int i=0;i<n;i++)
	{
	  cout<<"Enter "<<i+1<<" element"<<"\n";
	  	cin>>a;
		arr.push_back(a);
	}

      cout<<"maximum difference is" <<"\n"<<maxDiff(arr, n);
    
}
