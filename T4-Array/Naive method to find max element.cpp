//  C++ program to find second maximum element in array(Naive method)

#include <bits/stdc++.h>
using namespace std;
int getLarge(vector<int>arr,int n)
{
	int max=arr[0];
	for(int i=1;i<n;i++)
	{
        if(max<arr[i])
          max=arr[i];
        
	}
	return max;
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
    int m= getLarge(arr,n);
    int res=-1;
    for(int i=0;i<n;i++)
    {
    	 if(arr[i]!=m)
    	 {
    	 	if(res==-1)
    	 	 res=i;
    	    else if(arr[i]>arr[res])
    	      res=i;
		 }
    	   
	}
   	cout<<"Second maximum element in the array "<<"\n" <<arr[res];


}
