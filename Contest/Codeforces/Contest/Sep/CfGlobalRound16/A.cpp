
/*

   Contest Link: https://codeforces.com/contest/1566

   Problem Link
   https://codeforces.com/contest/1566/problem/A
   
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
  ll n,s;cin>>n>>s;

  if(n==1){cout<<s<<endl;return;}

 
    ll c=(n/2)+1;
    cout<<s/c<<endl;
  
    
}

int main()
{
  fio, fin, fou;
  
   ll t=1;
   cin >> t;
   
  for(ll i=1;i<=t;i++)
   { solve();}
   
}
