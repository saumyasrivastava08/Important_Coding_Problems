//Left rotate by d places(efficient approach) 
#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int>&arr, int l,int h)
{
	while(l<h)
	{
		swap(arr[h],arr[l]);
		l++;
		h--;
	}
}
void rotate(vector<int>&arr, int n,int d)
{
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}

int main()
{
	vector<int>arr;
	int n,a;
	cout<<"No. of elements in array"<<"\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
	cout<<"Before Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

	int d;
	cout<<"No of d places "<<"\n"; 
	cin>>d;
	
	rotate(arr,n,d);
    cout<<"After Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}
