#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	bsdk;
	ll t;
	cin>>t;
	while(t--)
	{
	  ll n;
	  cin>>n;
	  string s;string k;
	  cin>>s;
	 
	  for(int i=0;i<n;i++)
	  {
	  	if(s[i]!=s[i+1])
	  	  k.push_back(s[i]);
	  	
	  }
	  map<char,int>mp;
	  for(int i=0;i<k.size();i++)
	  {
	  	mp[k[i]]++;
	  }
	   ll f=0;
	  for(auto x:mp)
	  {
	  	if(x.second > 1)
	  	{
	  		f=1;
	  		break;
		  }
	  }
	 
	  if(f)
	  cout<<"NO"<<endl;
	  else
	  cout<<"YES"<<endl;
     
			 
	}
	
}
