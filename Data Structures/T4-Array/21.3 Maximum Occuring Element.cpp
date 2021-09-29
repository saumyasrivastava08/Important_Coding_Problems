#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
using namespace std;


int maxOcc(int L[], int R[], int n)
{	
    	int arr[1000];
    	
    	memset(arr, 0, sizeof(arr));

    	for(int i = 0; i < n; i++)
    	{
    		arr[L[i]]++;

    		arr[R[i] + 1]--;
    	}

    	int maxm = arr[0], res = 0;

    	for(int i = 1; i < 1000; i++)
    	{
    		arr[i] += arr[i - 1];

    		if(maxm < arr[i])
    		{
    			maxm = arr[i];

    			res = i;
    		}
    	}

    	return res;
}
    


int main() {
	
     
      int n,a;
      	cout<<"No. of elements in array"<<"\n";
	cin>>n;
	 int L[n] ;
	for(int i=0;i<n;i++)
	{
		cin>>L[i];
		
	}
      
      	 int R[n] ;
	for(int i=0;i<n;i++)
	{
		cin>>R[i];
		
	}
      cout<<maxOcc(L, R, n);

    
}
