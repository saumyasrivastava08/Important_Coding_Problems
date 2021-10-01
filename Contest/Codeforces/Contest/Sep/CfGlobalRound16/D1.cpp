
/*
 
  Contest Link: https://codeforces.com/contest/1566
 
   Problem Link
   https://codeforces.com/contest/1566/problem/D1
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
    ll n,m;cin>>n>>m;
    vpl s(m);
    map<ll,ll>ma;
    fo(i,m){cin>>s[i].F;s[i].S=i+1;ma[s[i].F]++;}
    ll ans=0;
    simsort(s);
   
    ll i=0;
    while(i<m)
    {
          if(ma[s[i].F]==1)
          {
             
             fo(j,i)if(s[i].S>s[j].S)ans++;
             i+=ma[s[i].F];
          }
          else
          {

             ll c=0;ll ind=i;
           forv(k,i,i+ma[s[i].F])
           {fo(j,i)if(s[k].S>s[j].S)ans++;}
           
             i+=ma[s[i].F]   ; 
             
          }
    }
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
