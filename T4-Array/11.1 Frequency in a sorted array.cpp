//Frequency in a sorted array
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr;
	int n,a;
	cout<<"No. of elements in array"<<"\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" element"<<"\n";
		cin>>a;
		arr.push_back(a);
	}
   int freq=1,i=1;
   while(i<n)
   {
   	   while(i<n && arr[i-1]==arr[i])
   	   {
   	   	 freq++;
   	   	 i++;
   	   	
	   }
   	  cout<<arr[i-1]<<"  "<<freq<<endl ;
   	  i++;
   	  freq=1;
   }   
 
}
