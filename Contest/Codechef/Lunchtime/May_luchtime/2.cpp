#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,k;
		cin>>a>>b>>c>>d>>k;
	    if(c>=a && d>=b)
	    {
	    	int r = c - a;
	    	int j = d -b;
	    	if(r+j==k)
	    	cout<<"YES"<<"\n";
	    	else
	    	cout<<"NO"<<"\n";	
		}
		else  if(c<=a && d<=b)
	    {
	    	int r = a - c;
	    	int j = b -d;
	    	if(r+j==k)
	    	cout<<"YES"<<"\n";
	    	else
	    	cout<<"NO"<<"\n";	
		}
		else if()
	}
}

