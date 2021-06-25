
#include<bits/stdc++.h>
#define ll long long
#define bsdk  ios_base::sync_with_stdio(false)
#define MOD 1000000007
using namespace std;
ll binpow(ll a,ll b)
{
    ll ans=1;
    while(b>0)
    {
        if(b%2)ans=(ans*a)%MOD;
        a=(a*a)%MOD;
      //  b>>=1;
    }
    return ans;
}
int main()
{
	bsdk;
    ll t;
    cin>>t;
  /*  vector<ll>v(n);
   
    for(ll i=0;i<n;i++)
    cin>>v[i];
  
  sort(v.begin(),v.end() , greater<ll>());
              cout<<v.front()<<" ";
              ll last;
              
              for(int i = n - 1; i >= 0 ; i--){
                  if(v.front()%v[i]==0){
                       if(last == v[i]) continue;
                       last = v[i];
                       v.erase(v.begin() + i);
                       //i++;
                  }
              }
//              for(auto x : v) cout<<x<<" ";
 
              cout<<v.front();*/
              while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    cout<<binpow(n,k)<<endl;
	}
    
}
