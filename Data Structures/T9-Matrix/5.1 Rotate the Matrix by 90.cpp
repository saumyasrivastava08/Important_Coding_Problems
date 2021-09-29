// RotateMatrix by 90 degree
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	
	}
	for(int i=0;i<n;i++)
	{
			for(int j=i+1;j<n;j++)
	     	{
			     swap(arr[i][j],arr[j][i]);
		    }
		  
	}
	for(int i=0;i<n;i++)
	{
		int l=0,h=n-1;
		while(l<=h)
		{
			swap(arr[l][i],arr[h][i]);
			l++;
			h--;
		}
	}
	for(int i=0;i<n;i++)
	{
			for(int j=0;j<n;j++)
	     	{
			    cout<< arr[i][j]<<" ";
		    }
		     cout<<endl;
	}
}
