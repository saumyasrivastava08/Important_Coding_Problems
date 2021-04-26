#define ll long long
#include<bits/stdc++.h>
using namespace std;
bool lucky(ll n)
{
	string s = to_string(n);
	ll f=1;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='4'|| s[i]=='7')
		{
			continue;
		}
		else
		{
			f=0;
			break;
		}
	}
	if(f)
	return true;
	else
	return false;
}
int main()
{
	ll k;
	cin>>k;
  if(lucky(k))
  {
  	cout<<"YES";
  }
  else
  {
  	ll f=0;
  	for(int i=4;i<k;i++)
  	{ 
  		if(lucky(i))
     	{
  		if(k%i==0)
  		{
  			f=1;
  			break;
     	}
        }
  		
	}
	if(f)
	cout<<"YES";
	else
	cout<<"NO";
  }
}
 
