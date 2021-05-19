#include <iostream>
using namespace std;



int getPeak(int arr[], int n)
{
	int low = 0, high = n - 1;

		while(low <= high)
		{
			int mid = (low + high) / 2;

			if((mid == 0 || arr[mid - 1] <= arr[mid]) &&
				(mid == n - 1 || arr[mid + 1] <= arr[mid]))
				return arr[mid];
			if(mid > 0 && arr[mid - 1] >= arr[mid])
				high = mid -1;
			else
				low = mid + 1;
		}
	return -1;
}

int main() {
    
	int n;
	cout<<"Enter number of elements \n";
	cin>>n;

	int arr[n];
	cout<<"Enter numbers  \n";
	for(int i=0;i<n;i++)
	cin>>arr[i];

 cout <<"Peak Element in given array is \n"<< getPeak(arr, n);

	return 0;
}
