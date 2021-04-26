#include <bits/stdc++.h>
using namespace std;

void printUnion(int a[], int b[], int m, int n){
    
    int c[m+n];
    for(int i=0;i<m;i++)
        c[i]=a[i];
    for(int i=0;i<n;i++)
        c[i+m]=b[i];
    sort(c,c+m+n);
    
    for(int i=0;i<m+n;i++){
        if(i==0||c[i]!=c[i-1])
            cout<<c[i]<<" ";
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

	printUnion(arr,brr,m,n);
}
