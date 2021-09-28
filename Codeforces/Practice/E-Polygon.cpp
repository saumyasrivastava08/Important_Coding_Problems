
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
  //  ll k=1;
	while(t--)
	{
      ll n;
      cin>>n;
        ll a[n][n];
      for(ll i=0;i<n;i++)
      {
          for(ll j=0;j<n;j++)
          {
              char c;
              cin>>c;
              a[i][j]= c-'0';
          }
           
      }
      ll f=1;
      for(ll i= n-2 ; i>=0;i--)
      {
          for(ll j= n-2 ; j>=0;j--)
          {
              if((a[i][j]==1 && a[i+1][j]==0) && (a[i][j]==1 && a[i][j+1]==0))
                        f=0;
          }
      }
      if(f)
      cout<<"YES"<<"\n";
      else
       cout<<"NO"<<"\n";
    }
}


