
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;

int search(vector<int>arr, int n, int x)
{
   	int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(arr[mid] == x)
			return mid;
		if(arr[low] < arr[mid])
		{
			if(x >= arr[low] && x < arr[mid])
				high = mid - 1;
			else 
				low = mid + 1;
		}
		else
		{
			if(x > arr[mid] && x <= arr[high])
				low = mid + 1;
			else
				high = mid - 1;
		}
	}
	

	return -1;
}
int main()
{
	ll n;
	cout<<"Enter number of elements \n";
	cin>>n;
	ll x;
	cout<<"Enter the number to which we have to find its  occurence \n";
	cin>>x;
	vector<int>arr(n);
	cout<<"Enter numbers in Sorted Order \n";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout << search(arr, n, x);
}
