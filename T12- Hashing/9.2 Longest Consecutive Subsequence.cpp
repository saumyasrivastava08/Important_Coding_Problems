#include <bits/stdc++.h>
using namespace std;

int findLongest(int arr[], int n)
{
    unordered_set<int>s(arr,arr+n);
   
        int m=0;
    for(auto x:s)
    {
    
    	if(s.find(x-1)==s.end())
    	  {
    	  		int c=1;
    	  		while(s.find(x+c)!=s.end())
    	  		 c++;
    	  		 m = max(c,m);
    	  	
		  }
    	
    	
	}
	return m;
}

int main()
{
   int n;
	cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    cout<<"Length of Longest Consecutive Subsequence\n"<< findLongest(arr, n);
}
