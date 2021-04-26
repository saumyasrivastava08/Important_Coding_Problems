//next greater element
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
	vector<int>p;
	s.push(arr[n-1]);
	cout<<"-1"<<" ";
	for(int i=n-2;i>=0;i--)
	{
		while(s.empty()==false && s.top()<=arr[i])
		    s.pop();
		    int span=0;
		    if(s.empty())
		      span=-1;
		    	else
		    	span=(s.top());
			
			cout<<span<<" ";
			s.push(arr[i]);
	}
}
