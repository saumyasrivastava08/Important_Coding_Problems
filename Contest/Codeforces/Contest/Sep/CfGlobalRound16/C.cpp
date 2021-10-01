
/*

   Contest Link: https://codeforces.com/contest/1566
   
   Problem Link
   https://codeforces.com/contest/1566/problem/C
*/


/**
 *  Author: PARAS GAMI
 * 
**/


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define vec vector<ll>
#define vpl vector<pair<ll, ll>>
#define vvl vector<vector<ll>>
#define fio ios_base::sync_with_stdio(false)
#define fo(i, n) for (ll i = 0; i < n; i++)
#define forv(i, n, N) for (ll i = n; i < N; i++)
#define ford(i, n, N) for (ll i = n; i >= N; i--)
#define fin cin.tie(NULL)
#define fou cout.tie(NULL)
#define mp make_pair
#define F first
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define S second
#define flush cout<<endl;
#define endl "\n"
#define simsort(v) sort(v.begin(), v.end())
#define simsortd(a) sort(a.begin(),a.end(),greater<int>())
#define adjm(adj,m) fo(i,m){ll u,v;cin>>u>>v;adj[u].pb(v);adj[v].pb(u);}
#define mod 1000000007



void solve()
{
 string s1,s2;ll n;
 cin>>n>>s1>>s2;
 ll ans=0,c0=0,c1=0;
 fo(i,n)
 {
   if(s1[i]!=s2[i])
   {
     ans+=2;
     ans+=c0;
     c1=c0=0;
   }
   else if(s1[i]=='1')
   {
     if(c0==1){ans+=2;c1=c0=0;}
     else if(c0>=2){ans+=c0+1;c1=c0=0;}
     else
     {
       c1++;
     }
   }
   else
   {
      if(c1>0)
      {
        ans+=2;c1=c0=0;
      }
      else c0++;   
   }
 }
 ans+=c0;

 cout<<ans<<endl;

    
}

int main()
{
  fio, fin, fou;
  
   ll t=1;
   cin >> t;
   
  for(ll i=1;i<=t;i++)
   { solve();}
   
}
