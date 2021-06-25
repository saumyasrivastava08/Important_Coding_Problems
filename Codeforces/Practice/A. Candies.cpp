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
		ll n,m;
		cin>>n;
	    ll k = (int)log2(n);
	    
	    if(n==3 || n==1)
	    cout<<1<<"\n";
	    else
	    {
	     if(n%2==0)
	    cout<<k<<endl;
	    else
	    cout<<(k-1)<<endl;	
		}
	   
		

	
      
    
			 
	}
	
}
