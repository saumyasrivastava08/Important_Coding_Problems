#include <iostream>
#include <cmath>
#include <climits>
using namespace std;


bool checkEquilibrium(int arr[], int n)
{
	int sum = 0;

	for(int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	int l_sum = 0;

	for(int i = 0; i < n; i++)
	{
		if(l_sum == sum - arr[i])
			return true;

		l_sum += arr[i];

		sum -= arr[i];
	}

	return false;
}
    


int main() {
	
     
      int n,a;
      	cout<<"No. of elements in array"<<"\n";
	cin>>n;
	 int arr[n] ;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
      
      printf("%s",checkEquilibrium(arr, n)? "true" : "false");

    
}
