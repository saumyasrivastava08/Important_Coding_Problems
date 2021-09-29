#include <bits/stdc++.h>
using namespace std;

int intersection(int arr1[], int m, int arr2[], int n)
{
    unordered_set<int> us;
    for(int i = 0; i < m; i++)
      us.insert(arr1[i]);
      
    int res = 0;  
    for(int i = 0; i < n; i++)
    {
        if(us.find(arr2[i]) != us.end())
        {
            res++;
            us.erase(arr2[i]);
        }
    }
    return res;
}

int main()
{
  	int n,m;
	cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++)
    cin>>arr1[i];
     for(int i=0;i<m;i++)
    cin>>arr2[i];
    cout << intersection(arr1, n, arr2, m);
    
    return 0;
}
