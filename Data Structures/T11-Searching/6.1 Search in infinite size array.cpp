
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
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


int search(vector<int>arr, int x)
{
    if(arr[0] == x) return 0;

	int i = 1;

	while(arr[i] < x)
		i = i * 2;

	if(arr[i] == x) return i;


	return bSearch(arr, i / 2 + 1, i - 1, x);
}

int main()
{
	
	ll x;
	cout<<"Enter the number to which we have to find its number of occurence \n";
	cin>>x;
	vector<int>arr;
	cout<<"Enter numbers in Sorted Order \n";
	int i=0,a;
	 while(cin>>a)
	 {
	 	arr.push_back(a);
	 }
	
	cout << search(arr, x);
}
	
