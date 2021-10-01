// https://codeforces.com/problemset/problem/1519/C
// https://codeforces.com/contest/1519/submission/124425100

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define vi vector<int>
#define vll vector<ll>
#define vpii vector < pair <int,int> >
#define ff first
#define ss second
#define pb(x) push_back(x)
#define all(a) a.begin(),a.end()
#define input(arr,n) FOR(i,0,n) cin>>a[i]
#define FOR(i,k,n) for ( int i=k; i<n; i++ )
#define ll long long

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void fnc()
{
    int n;
    cin>>n;
    vi a(n);
    unordered_map<int,vll> mp;

    FOR(i,0,n)
        cin>>a[i];
    FOR(i,0,n)
    {
        int x;
        cin>>x;
        mp[a[i]].pb(x);
    }

    for ( auto x : mp )
    {
        sort(all(mp[x.ff]),greater<int>());
        FOR(i,1,mp[x.ff].size())
            mp[x.ff][i] += mp[x.ff][i-1];
    }

    vll ans(n+1,0);
    
    for ( auto x : mp )
    {
        ll sum=0;
        FOR(k,1,x.ss.size()+1)
        {
            int in = x.ss.size() - (x.ss.size()%k);
            if ( in>0 )
                ans[k]+=x.ss[in-1];
        }
    }

    FOR(i,1,n+1)
        cout<<ans[i]<<' ';
    
}

int main(){
    int n;
    cin>>n;
    FOR(i,0,n)
    {
        fnc();
        cout<<"\n";
    }
}