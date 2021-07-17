#include <bits/stdc++.h>
using namespace std;

int minDiff(int arr[],int n,int m){
    if(m>n)
        return -1;
    sort(arr,arr+n);
    int res=arr[m-1]-arr[0];
    for(int i=0;(i+m-1)<n;i++)
        res=min(res,arr[i+m-1]-arr[i]);
    return res;
}
 
int main() {
	int n;
	cout<<"Enter Number of elements \n";
    cin>>n;
    int m;
    cout<<"M nos of Choclates \n";
    cin>>m;
	
	int arr[n];
    for(int i=0;i<n;i++)
	 cin>>arr[i];
	
	cout<<"Minimum difference of M choclates are \n"<<minDiff(arr,n,m);
}
