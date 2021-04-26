//Merge two sorted Array
#include<bits/stdc++.h> 
using namespace std;

int main() {
	
    vector<int> arr;
    int n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	 {
	 	cin>>a;
	 	arr.push_back(a);
	 }
	vector<int> brr;
	int m,b;
	cin>>m;
	for(int j=0;j<m;j++)
	 {
	 	cin>>b;
	 	brr.push_back(b);
	 }
	int i=0,j=0;
	while(i<n && j<m)
	{
		if(arr[i]<=brr[j])
		{
			cout<<arr[i]<<" ";
			i++;
		}
		else
		{
		   cout<<brr[j]<<" ";
			j++;	
		}
	}
	while(i!=n)
	{
		cout<<arr[i]<<" ";
		i++;
	}
	
	while(j!=m)
	{
		cout<<brr[j]<<" ";
		j++;
	}
	
     

}
