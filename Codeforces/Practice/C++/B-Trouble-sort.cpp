
//Sidnaaz forever
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
map<ll,ll>mp;
ll pairs(ll number)
{
    return((number*(number-1))/2);
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
       vector<ll>a(n);
       vector<ll>b(n);
       bool f = true;
       ll z=0,o=0;
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(ll i=0;i<n;i++)
       {
           cin>>b[i];
           if(b[i]==1)
             o++;
           else
             z++;  
       }
       for(ll i=0;i<n-1;i++)
       {
           if(a[i]>a[i+1])
             f=false;
       }
      if(f)
       cout<<"YES"<<"\n";
      else
      {
          if(o!=0 && z!=0)
            cout<<"YES"<<"\n";
           else
           cout<<"NO"<<"\n";  
      }  
    }
        
    
}


