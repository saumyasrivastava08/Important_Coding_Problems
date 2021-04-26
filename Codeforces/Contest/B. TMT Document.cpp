#define ll long long
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		ll t=0,m=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='T')
			 t++;
			else if(s[i]=='M')
			m++;
		}
	//	map<char,int>mp;
		if((2*m)==(t))
		{
			ll cc=0,ff=1;
				for(int i=0;i<n;i++)
			    {
				if(s[i]=='T') 
				cc++;
				else if(s[i]=='M')
				{
					if(cc>0)
					cc=cc-1;
					else 
					{
					    ff=0;
					    break;
					}
				}
		    	}
		    	ll c=0,f=1;
			for(int i=n-1;i>=0;i--)
			{
				if(s[i]=='T') 
				c++;
				else if(s[i]=='M')
				{
					if(c>0)
					c=c-1;
					else 
					{
					    f=0;
					    break;
					}
				}
			}
			if(f==1 && ff==1)
			cout<<"YES"<<"\n";
			else
			cout<<"NO"<<"\n";
			
		}
		else
		{
			cout<<"NO"<<"\n";
		}
	}
}
