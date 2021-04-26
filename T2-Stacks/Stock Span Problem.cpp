//stock span problem using stacks
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr;
	int n,a;
	cout<<"No of elements "<<" ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
	stack<int>s;
	s.push(0);
	cout<<"1"<<" ";
	for(int i=1;i<n;i++)
	{
		while(s.empty()==false && arr[s.top()]<=arr[i])
		    s.pop();
		    int span=0;
		    if(s.empty())
		    
		    	span=i+1;
		    	else
		    	span=(i-s.top());
			
			cout<<span<<" ";
			s.push(i);
	}
}
