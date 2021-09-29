#include <iostream>
#include <algorithm>
using namespace std;

void intersection(int a[], int b[], int m, int n){
    
    for(int i=0;i<m;i++){
        if(i>0 && a[i-1]==a[i])
            continue;
        for(int j=0;j<n;j++)
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
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
