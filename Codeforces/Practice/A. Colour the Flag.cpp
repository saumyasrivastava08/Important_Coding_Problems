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
		cin>>n>>m;
	       vector<vector<char>> v(n, vector<char>(m));
      vector<vector<char>> a(n, vector<char>(m));
      vector<vector<char>> b(n, vector<char>(m));
	   for(ll i=0;i<n;i++)
	     {
	     	for(ll j=0;j<m;j++)
	     	   cin>>v[i][j];
		 }
	  
	   for(ll i=0;i<n;i++)
	   {
	   	for(ll j=0;j<m;j++)
	   	{
	   		if((i+j)%2==0)
	   		  {
	   		  	a[i][j]='W';
	   		  	b[i][j]='R';
			  }
			  else
			  {
			  	a[i][j]='R';
			  	b[i][j]='W';
			  }
	    }
	  }
	  ll f1=0,f2=0;
	   for(ll i=0;i<n;i++)
	   {
	   	for(ll j=0;j<m;j++)
	   	{
	   		if(v[i][j]!='.')
	   		  {
	   		  	  if(v[i][j]!=a[i][j])
	   		  	      f1=1;
	   		  	  if(v[i][j]!=b[i][j])
					   f2=1;    
			  }
			
	    }
	  }
		
		 
		  if(f1==0)
		  {
		  	cout<<"YES"<<"\n";
		  	for(ll i=0;i<n;i++)
		  	{
		  		for(ll j=0;j<m;j++)
		  		{
		  			cout<<a[i][j];
				}
				cout<<"\n";
			 }
		       continue;
			 
		  }
		   if(f2==0)
		  {
		  	cout<<"YES"<<"\n";
		  	for(ll i=0;i<n;i++)
		  	{
		  		for(ll j=0;j<m;j++)
		  		{
		  			cout<<b[i][j];
				}
				cout<<"\n";
			 }
		        continue;
		  }
     cout<<"NO"<<endl;
	
      
    
			 
	}
	
}
