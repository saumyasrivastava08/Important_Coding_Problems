
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
	ll t;
	cin>>t;
   
	while(t--)
	{
        ll n,m;
        cin>>n>>m;
      if(n<=m)
      cout<<1<<endl;
      else
      {
          ll f = m; ll ans=n;
          for(ll i=1; i*i<=n ; i++)

          {
              if(n%i==0)
              {
                  if(i<=m)
                  {
                      ans = min(ans,n/i);
                  }
                  if(n/i<=k)
                  ans = min(ans,i);
              }
          }
          cout<<ans<<endl;
      }
        
    }
}


