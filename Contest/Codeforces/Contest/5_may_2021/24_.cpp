#include<bits/stdc++.h>
using namespace std;
bool areSame(int arr[],int n)
{
  int first = arr[0];
 
  for (int i = 1; i < n; i++)
    if (arr[i] != first)
      return 0;
  return 1;
}
int main()
{
	int t,c;
	cin>>t;
	while(t--)
	{
		int c=0;
		int n;
		cin>>n;
		int *arr= new int[n];
		for(int i=0;i<n;i++)
		   cin>>arr[i];
		int min=arr[0];
		for(int i=1;i<n;i++)
		{
			if(arr[i]<min)
			  min=arr[i];
			
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]==min)
			   c++;
		}
		if(n==1 || c==n)
		   cout<<"0"<<endl;
		else
		{
			cout<<n-c<<endl;
		}
		
		
		
		
	}
}
