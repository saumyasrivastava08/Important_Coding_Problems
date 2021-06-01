#include <iostream>
#include <cmath>
#include <climits>
using namespace std;


int prefix_sum[10000]; 

void preSum(int arr[], int n)
{


	prefix_sum[0] = arr[0];

	for(int i = 1; i < n; i++)
	{
		prefix_sum[i] = prefix_sum[i - 1] + arr[i];
	}
	
	
}

int getSum(int prefix_sum[], int l, int r)
{
	if(l != 0)
		return prefix_sum[r] - prefix_sum[l - 1];
	else
		return prefix_sum[r];
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

      preSum(arr, n);

     cout<<getSum(prefix_sum, 1, 3)<<endl;
     
     cout<<getSum(prefix_sum, 0, 2)<<endl;
    
}
