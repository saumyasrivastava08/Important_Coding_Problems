#include<bits/stdc++.h>
using namespace std;



int main() {
	
    vector<int>arr;
	int n,a;
	cout<<"No. of elements in array"<<"\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
  int k;
	cout<<"K consecutive numbers are \n";
	cin>>k;
	int curr_sum = 0;

	for(int i = 0; i < k; i++)
		curr_sum += arr[i];

	int max_sum = curr_sum;

	for(int i = k; i < n; i++)
	{
		curr_sum += (arr[i] - arr[i - k]);

		max_sum = max(max_sum, curr_sum);
	}

	cout<<"Maximum Sum of k consecutive nos are :- "<<max_sum;
    
}
