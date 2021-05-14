//_________________________________________________________________________________Saumya______________________________________________________________________________don
//_________________________


#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
 const unsigned int M = 1000000007;
using namespace std;
void pow(ll n)
{
	ll i=0;
	ll j=0,	 c=0;
	while(j<=(pow(2,n)-1))
	{
		if(ceil(log2(j)) == floor(log2(j)))
		{
		
			c++;
		}
	   i++; 
	   j = pow(2,i)-1;
	}
//	cout<<(c%M)<<endl;
//	i++;
}

int main()
{
	bsdk;
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		ll pp = 100-a;
		ll k = pp*c;
	   ll jj= b + k;
	   cout<<jj*10<<endl;
	
	}
	     
}
