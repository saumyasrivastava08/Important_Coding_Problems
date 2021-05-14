#include <bits/stdc++.h>
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
using namespace std;
//Sorted Array Only
int bSearch(vector<int>arr, int low, int high, int x)
{
	if(low > high)
		return -1;

	int mid = (low + high) / 2;

	if(arr[mid] == x)
		return mid;

	else if(arr[mid] > x)
		return bSearch(arr, low, mid - 1, x);

	else
		return bSearch(arr, mid + 1, high, x);
}

int main()
{
	bsdk;
	ll n;
	cout<<"Enter no of values in array \n";
	cin>>n;
	
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	cin>>arr[i];
	ll x;
	cout<<"Enter the value to find in array \n";
	cin>>x;
		cout<<bSearch(arr, 0, n - 1, x);


}
