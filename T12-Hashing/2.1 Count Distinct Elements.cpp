#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n)
{
    unordered_set<int> us;
    for(int i = 0; i < n; i++)
      us.insert(arr[i]);
      
    return us.size();
}

int main()
{
	int n;
	cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
     
    cout << countDistinct(arr, n);
    
    return 0;
}
