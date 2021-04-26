#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll a,t;
	cin>>a>>t;
	if(t!=10)
	{
		for(int i=0;i<a;i++)
		 cout<<t;
	}
	else
	{
		if(a==1)
		cout<<-1;
		else
		{
			for(int i=0;i<(a-1);i++)
	         	cout<<1;
		        cout<<0;
		}
		
	}
	
}
