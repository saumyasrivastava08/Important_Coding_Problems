#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h)
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

int kthSmallest(int arr[],int n,int k){
    int l=0,r=n-1;
    while(l<=r){
        int p=partition(arr,l,r);
        if(p==k-1)
            return p;
        else if(p>k-1)
            r=p-1;
        else
            l=p+1;
    }
    return -1;
}
 
int main() {
	
    int n;
    cout<<"Enter Number of elements \n";
    cin>>n;
    int k;
    cout<<"Kth Smallest element \n";
    cin>>k;
	
	int arr[n];
    for(int i=0;i<n;i++)
	 cin>>arr[i];
	
	int index=kthSmallest(arr,n,k);
	cout<<k<<" smallest element is \n";
	cout<<arr[index];
	
}
