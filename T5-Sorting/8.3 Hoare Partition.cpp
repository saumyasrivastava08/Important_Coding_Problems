#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h)
{   
    int pivot=arr[l];
    int i=l-1,j=h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)return j;
        swap(arr[i],arr[j]);
    }
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
