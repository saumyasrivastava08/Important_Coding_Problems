#include<bits/stdc++.h>
using namespace std;


int maxProfit(vector<int>&price, int start, int end)
{
	if(end <= start)
		return 0;

	int profit = 0;

	for(int i = start; i < end; i++)
	{
		for(int j = i + 1; j <= end; j++)
		{
			if(price[j] > price[i])
			{
				int curr_profit = price[j] - price[i] 
								  + maxProfit(price, start, i - 1)
								  + maxProfit(price, j + 1, end);

				profit = max(profit, curr_profit);
			}
		}
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

      cout<<maxProfit(arr, 0, n - 1);
    
}
