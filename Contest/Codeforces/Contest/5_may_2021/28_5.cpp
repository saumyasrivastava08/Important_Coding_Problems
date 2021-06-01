#include<stdio.h>
#include<bits/stdc++.h>
using namespace std; 
int main() 
{ 
    int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int *a= new int[2*n];
		for(int i=0;i<2*n;i++)
		    cin>>a[i]; 
		sort(a,a+2*n);
		int c= n;
 	for(int i=0;i<n;i++)
 	{
 			cout<<a[i]<<" "<<a[2*n-i-1]<<" ";
 		}
 		cout<<endl;
}
}
