#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[], int n, int sum)
{
    int l = 0, h = n-1;
    int mid;
    while(l <= h)
    {
        if(arr[l] + arr[h] == sum)
          return true;
        else if(arr[l] + arr[h] > sum)
             h--;
        else l++;
    }
    return false;
}

int main()
{
  	int n;
	cout<<"Enter number of elements \n";
	cin>>n;
    int x;
    cin>>x;
	int arr[n];
	cout<<"Enter numbers  \n";
	for(int i=0;i<n;i++)
	cin>>arr[i];
    
    cout << isPresent(arr, n, x);
}
