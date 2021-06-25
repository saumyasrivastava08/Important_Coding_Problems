#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
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
		ll fff=0;
		vector<ll>a(n);
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<0)
			 {
			 	fff=1;
			 
			 }
		}
		if(fff)
		cout<<"NO"<<"\n";
		  
		
	
		else
		{
			 ll g[n];
		 
		  unordered_set<ll>us;
		for(ll i=0;i<n;i++)
		{
			
			 
			 		g[i]= ((a[i]));
		         	us.insert(g[i]);
			 
		
		}  
			ll pp = findGCD(g,n);
    
            ll la=largest(g,n);
     
            for(ll i=1;pp*i<=la;++i)
      {
      	us.insert(pp*i);
	  }
	  cout<<"YES"<<"\n";
	  cout<<us.size()<<"\n";
	  for(auto x:us)
	   cout<<x<<" ";
	   cout<<"\n";
	 	}
      
    
			 
	}
	
}
