//_________________________________________________________________________________Saumya______________________________________________________________________________don
//_________________________


#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
 const unsigned int MOD = 1000000007;
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
ll chut(ll a, ll b){
	ll temp = 1;
	while(b){
		if(b & 1) temp = (temp * a) % MOD;
		b /= 2;
		a = (a*a) % MOD;
	}
	return temp;
}
int main()
{
	bsdk;
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		/*vector<int>arr;
		arr.push_back(0);
		ll i=1;
			ll f=0;
		while(i*c<=a+1)
		{
		  ll 	k = c * i;
		 if(k==b)
		 {
		 	f=1;
		 	break;
		 }
		    i++;  
		}
	
	
	  if(f)*/
	 ll k= chut(2,n-1);
	 cout<<k<<endl;
	
	}
	     
}
