// C++ implementation to find the length
// of longest subarray having sum k
#include <bits/stdc++.h>
using namespace std;


int lenOfLongSubarr(int arr[],
					int n,
					int k)
{

	// unordered_map 'um' implemented
	// as hash table
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
             cout<<um[sum - k]<<" ";
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
int n;
	cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
	cout << "Length = "
		<< lenOfLongSubarr(arr, n, k);
	return 0;
}

