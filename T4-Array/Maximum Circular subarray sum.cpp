#include <bits/stdc++.h>
using namespace std;


int normalMaxSum(vector<int>&arr, int n)
{
	int res = arr[0];

	int maxEnding = arr[0];

	for(int i = 1; i < n; i++)
	{
		maxEnding = max(maxEnding + arr[i], arr[i]);

		res = max(maxEnding, res);
	}
	
	return res;
}

int overallMaxSum(vector<int>&arr, int n)
{
	int max_normal = normalMaxSum(arr, n);

	if(max_normal < 0)
		return max_normal;

	int arr_sum = 0;

	for(int i = 0; i < n; i++)
	{
		arr_sum += arr[i];

		arr[i] = -arr[i];
	}

	int max_circular = arr_sum + normalMaxSum(arr, n);

	return max(max_circular, max_normal);
}



int main() {
	
    vector<int>arr;
	int n,a;
	cout<<"No. of elements in array"<<"\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
     cout<<"Maximum sum of circular subarray is"<<"\n"<<overallMaxSum(arr, n);
    
}
