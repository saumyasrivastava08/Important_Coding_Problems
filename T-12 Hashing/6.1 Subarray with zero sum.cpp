#include <bits/stdc++.h>
using namespace std;

int ZeroSumSubarray(int arr[], int n)
{
    unordered_set<int> us;
    int prefix_sum = 0;
    us.insert(0);
    for(int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
       // cout<< prefix_sum<<" ";
        if(us.find(prefix_sum) != us.end()|| prefix_sum==0)
          return 1;
        us.insert(prefix_sum);
    }
    return 0;
    
}

int main()
{
   	int n;
	cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    cout << ZeroSumSubarray(arr, n);
}
