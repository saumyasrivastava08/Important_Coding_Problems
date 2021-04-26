//  C++ program to find second maximum element in array(Naive method)

#include <bits/stdc++.h>
using namespace std;
int getLarge(vector<int>arr,int n)
{
	int max=0 ,res=-1;
	for(int i=1;i<n;i++)
	{
        if(arr[max]<arr[i])
         {
         	 res=max;
         	 max=i;
		 } 
		 else if(arr[i]!=arr[max])
		 {
		 	if(res==-1||arr[res]<arr[i])
		 	  res=i;
		 }
        
	}
	return arr[res];
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
    
   	cout<<"Second maximum element in the array "<<"\n" <<m;


}
