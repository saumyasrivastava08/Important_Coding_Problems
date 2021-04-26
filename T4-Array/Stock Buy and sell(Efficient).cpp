#include<bits/stdc++.h>
using namespace std;


int maxProfit(vector<int>&price, int n)
{


	int profit = 0;

   for(int i = 1; i < n; i++)
	{
		if(price[i] > price[i - 1])
			profit += price[i] - price[i -1];
	}

	return profit;
}


int main() {
	
         int n,a;
    	cout<<"No. of elements in array"<<"\n";
    	cin>>n;
		vector<int>arr;
	   
     	for(int i=0;i<n;i++)
    	{
	      cout<<"Enter "<<i+1<<" element"<<"\n";
	     	cin>>a;
	    	arr.push_back(a);
	    }

      cout<<"Maximum Profit is"<<" \n"<<maxProfit(arr, n);
    
}
