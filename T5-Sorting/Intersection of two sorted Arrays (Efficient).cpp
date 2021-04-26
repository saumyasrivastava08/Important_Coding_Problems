#include <bits/stdc++.h>
using namespace std;

void intersection(int a[], int b[], int m, int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(i>0 && a[i-1]==a[i]){
            i++;
            continue;
        }
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;j++;
        }
    }    
}

int main() {
	
  	int m;
	cin>>m;
	int arr[m];
	for(int i=0;i<m;i++)
	 cin>>arr[i];
	 	int n;
	cin>>n;
	int brr[n];
	for(int i=0;i<n;i++)
	 cin>>brr[i];
	intersection(arr,brr,m,n);
}
