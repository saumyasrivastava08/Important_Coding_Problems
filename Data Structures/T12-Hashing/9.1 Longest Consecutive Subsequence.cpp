#include <bits/stdc++.h>
using namespace std;

int findLongest(int arr[], int n)
{
    sort(arr,arr+n);
    int res=1,curr=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]+1)
            curr++;
        else{
            res=max(res,curr);
            curr=1;
        }
    }
    res=max(res,curr);
    return res;
}

int main()
{
   int n;
	cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    cout << findLongest(arr, n);
}
