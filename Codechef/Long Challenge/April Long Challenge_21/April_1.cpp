#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll a , b,c;
	cin>>a>>b>>c;
	if(a!=b && a!=c)
	{
		if(b!=c)
		{
			cout<<"No"<<"\n";
		}
		else if(b==c)
		{
				cout<<"Yes"<<"\n";
		}
	}
	else if(a==b || a==c)
	     cout<<"Yes"<<"\n";
	     
}
