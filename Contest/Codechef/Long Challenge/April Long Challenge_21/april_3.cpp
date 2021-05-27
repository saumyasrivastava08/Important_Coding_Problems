#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	ll j=0,f=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='*')
		{
			j++;
			if(j==k)
			{
				f=1;
				break;
			}
		}
		else
		j=0;
	}
	if(f)
	cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	}
	
	
}
