#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	 int n;
     cin>>n;
 	pair<int ,char>arr[n];
    
     int a[n];
     char b[n];
    for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
 	}
	 	for(int i=0;i<n;i++)
 	{
 		cin>>b[i];
 		
	 }
 	for(int i=0;i<n;i++)
 	{
 	
 		arr[i]={a[i],b[i]};
	 }
	 sort(arr,arr+n);
	 for(int i=0;i<n;i++)
	 {
	 	cout<<arr[i].second<<" ";
	 }
 }
