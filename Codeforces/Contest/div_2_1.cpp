#define ll long long 
#include<bits/stdc++.h>
using namespace std;
long long sumdigits(string s)
{


	ll sum=0;
		for(ll i=0;s[i]!='\0';i++)
		{
			sum+=s[i]-'0';
		}
		return sum;

}
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
  	ll n;
  	cin>>n;
  	while(true)
  	{
  		string p = to_string(n);
  	      if(__gcd(n,sumdigits(p))==1)
  	      {
  	      	 n=n+1;
		  }
			else
			break;
  	
	}
  	cout<<n<<"\n";
  }
	
}
