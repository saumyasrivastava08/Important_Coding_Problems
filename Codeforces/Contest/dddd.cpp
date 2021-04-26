#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		string s = to_string(n);
		string ss;
		for(int i=0;i<s.length();i++)
		{
			while(m--)
			{
			int  k = (int)s[i]-48;
			 k = k + 1;
			char jj = itoa(k);
			ss=ss+jj;	
			}
		}
			
	}
		cout<<ss<<endl;
	}
}
