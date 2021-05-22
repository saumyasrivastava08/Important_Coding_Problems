
#include <bits/stdc++.h>
using namespace std;


int lenOfLongSubarr(bool arr1[],bool arr2[] ,int n)
{

	// unordered_map 'um' implemented
	// as hash table
		int arr[n]; 
		int k=0;
	for (int i=0; i<n; i++) 
	arr[i] = arr1[i] - arr2[i]; 
	
	unordered_map<int, int> um;
	int sum = 0, maxLen = 0;

	// traverse the given array
	for (int i = 0; i < n; i++) {

		// accumulate sum
		sum += arr[i];

		// when subarray starts from index '0'
		if (sum == k)
			maxLen = i + 1;

		// make an entry for 'sum' if it is
		// not present in 'um'
		if (um.find(sum) == um.end())
			um[sum] = i;

		// check if 'sum-k' is present in 'um'
		// or not
		
		if (um.find(sum - k) != um.end()) {
           //  cout<<um[sum - k]<<" ";
			// update maxLength
			if (maxLen < (i - um[sum - k]))
				maxLen = i - um[sum - k];
		}
	}

	// required maximum length
	return maxLen;
}

// Driver Code
int main()
{
int n,m;
	cin>>n;
    bool arr1[n];
    for(int i=0;i<n;i++)
    cin>>arr1[i];
      bool arr2[n];
    for(int i=0;i<n;i++)
    cin>>arr2[i];
   
	cout << "Length = "
		<< lenOfLongSubarr(arr1,arr2,n);
	return 0;
}



