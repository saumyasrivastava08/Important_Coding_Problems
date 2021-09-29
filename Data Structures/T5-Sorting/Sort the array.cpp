#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	 sort(arr,arr+n);
	cout<<"Ascending order"<<"\n";
	for(int x: arr)
	    cout<<x<<" ";
	sort(arr,arr+n,greater<int>());
	cout<<endl;
	cout<<"Dscending order"<<"\n";
	for(int x: arr)
	    cout<<x<<" ";
}
