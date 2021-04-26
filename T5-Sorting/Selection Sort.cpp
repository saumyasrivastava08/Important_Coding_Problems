//Implace Selection Sort Algorithm

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
	 int min=0;
  for(int i=0;i<n;i++)   //Bubble Sort in Ascending Order
  {
  	   min=i;
  	for(int j=i+1;j<n;j++)
  	{
  		if(arr[j]>arr[min])
  	    	min=j;
  		
	}
	  swap(arr[i],arr[min]);
   }
   cout<<"Elements in Descending Order"<<endl;
   for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";	
      for(int i=0;i<n;i++)   //Bubble Sort in Ascending Order
       {
  	        min=i;
        	for(int j=i+1;j<n;j++)
            	{
  	            	if(arr[j]<arr[min])
  	            	min=j;
  		           
             	}
             	 swap(arr[i],arr[min]);
       }
   	cout<<"\n Elements in Ascending Order"<<endl;
   for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

}
