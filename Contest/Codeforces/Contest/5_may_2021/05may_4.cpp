
#include<bits/stdc++.h>
#define ll long long
#define bsdk  ios_base::sync_with_stdio(false)
#define mod 1000000007
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
          vector<ll>arr(n);
          unordered_map<ll,ll>mp;
          for(ll i=0;i<n;i++)
          {
          	cin>>arr[i];
          	arr[i]=arr[i]-i;
          	mp[arr[i]]++;
		  }
		  ll s=0;
		  for(auto x:mp)
		  {
		     
		  		s= s+ (((x.second)*(x.second-1))/2);
			  
		  	
		  }
		
          cout<<s<<endl;
     }
}
