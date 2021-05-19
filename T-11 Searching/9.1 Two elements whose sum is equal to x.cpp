// C++ program to check if given array 
// has 2 elements whose sum is equal 
// to the given value 
#include <bits/stdc++.h> 

using namespace std; 

void printPairs(int arr[], int arr_size, int sum) 
{ 
	unordered_set<int> s; 
	for (int i = 0; i < arr_size; i++) { 
		int temp = sum - arr[i]; 

		if (s.find(temp) != s.end()) 
			cout << "Pair with given sum " << sum << " is (" << arr[i] << ", " << temp << ")" << endl; 

		s.insert(arr[i]); 
	} 
} 

/* Driver program to test above function */
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

	printPairs(arr, n, x); 

	return 0; 
} 

