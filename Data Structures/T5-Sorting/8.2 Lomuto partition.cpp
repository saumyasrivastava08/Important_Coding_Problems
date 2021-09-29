#include <bits/stdc++.h>
using namespace std;

int iPartition(int arr[], int l, int h)
{   
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
 
int main() {
	int n;
    cout<<"Enter Number of elements \n";
	cin>>n;
	int arr[n];
    for(int i=0;i<n;i++)
	 cin>>arr[i];
	iPartition(arr,0,n-1);
	for(int x: arr)
	    cout<<x<<" ";
}
