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
  for(int i=0;i<n-1;i++)   //Bubble Sort in Ascending Order
  {
  	for(int j=0;j<n-i-1;j++)
  	{
  		if(arr[j]>arr[j+1])
  		  swap(arr[j],arr[j+1]);
	}
   }
   cout<<"Elements in Ascending Order"<<endl;
   for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";	
    cout<<"\n";
	 for(int i=0;i<n-1;i++)   //Bubble Sort in descending Order
     {
      	for(int j=0;j<n-i-1;j++)
     	{
  		if(arr[j]<arr[j+1])
  		  swap(arr[j],arr[j+1]);
    	}
     }
   cout<<"Elements in Descending Order"<<endl;
   for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";	

}

