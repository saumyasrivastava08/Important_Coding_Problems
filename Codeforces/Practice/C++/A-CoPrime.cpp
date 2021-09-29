
//Sidnaaz forever
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
ll pairs(ll number)
{
    return((number*(number-1))/2);
}
int main()
{
	bsdk;
	ll t=1;
	//cin>>t;
   
	while(t--)
	{
        ll n;
        cin>>n;
        vector<ll>v(n);
     ll s=0;
     vector<ll>res;
      for(ll i=0;i<n;i++)
      {
          cin>>v[i];
          if(__gcd(v[i],v[i-1])!=1&& i!=0)
          {      s++;
                 res.push_back(1);     
          }
          res.push_back(v[i]);
      }
      cout<<s<<"\n";
      for(auto x:res)
        cout<<x<<" ";
         cout<<"\n";
    }
        
    
}


