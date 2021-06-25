#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#define loop(i,n) for(ll i = 0; i < n; i++)
#include<bits/stdc++.h>
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

ll findGCD(ll arr[], ll n)
{
    ll result = arr[0];
    for (ll i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}
ll largest(ll arr[], ll n)
{
    
   
    ll max = arr[0];
     for (ll i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
bool pow2(ll n)
{
		
	if(ceil(log2(n))==floor(log2(n)))	
	  return true;
	  else
	return false;	
}
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
		vector<ll>v(n);
		for(ll i=0 ;i <n;i++)
		{
			cin>>v[i];
		}
		ll k= *max_element(v.begin(),v.end());
	     ll m= *min_element(v.begin(),v.end());
		ll l=0,h=n-1,ma=0,mi=0;
		for(ll i=0;i<n;i++)
		{
			if(v[i]==k)
			  ma=i;
			 if(v[i]==m)
			 mi=i; 
		}
	     ll f= abs(0-ma);
	     ll ff = abs(0-mi);
	     ll fff= abs((n-1)-ma);
	      ll ffff= abs((n-1)-mi);
	      ll c=0;
         if(f>=fff)
		 {
		 	 if(fff==0)
		 	    c= c+ fff;
		 	  else if(fff!=0)
			    c=c+ fff+1;  
		 }	
        else if(f<fff)
        {
        	if(f==0)
        	  c=c+f;
        	  else if(f!=0)
        	    c=c+f+1;
		}
	if(ff>=ffff)
	{
		if(ffff==0)
		 c=c+ffff;
		 else if(ffff!=0)
		 c=c+ffff+1;
	}
      else if(ff<ffff)
      {
      	if(ff==0)
      	 c=c+f;
      	 else if(ff!=0)
      	   c=c+ff+1;
	  }
    
		cout<<c<<endl;	 
	}
	
}
