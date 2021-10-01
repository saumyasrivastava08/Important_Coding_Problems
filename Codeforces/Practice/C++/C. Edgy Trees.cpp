// https://codeforces.com/contest/1139/problem/C
// https://codeforces.com/contest/1139/submission/120013783

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define vi vector<int>
#define pb(x) push_back(x)
#define all(c) c.begin(),c.end()
#define FOR(i,k,n) for ( int i=k; i<n; i++ )
#define ll long long

const int mod = 1e9 + 7;
 
int add(int a, int b, int mod){
    int res = (a + b) % mod;
    if(res < 0)
        res += mod;
    return res;
}
 
int mult(int a, int b, int mod){
    int res = (a * 1LL * b) % mod;
    if(res < 0)
        res += mod;
    return res;
}
 
int power(int a, int b, int mod){
    int res = 1;
    while(b){
        if((b % 2) == 1)
            res = mult(res, a, mod);
        a = mult(a, a, mod);
        b /= 2;
    }
    return res;
}

int parent[100000];
int size_[100000];

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void make_set(int v) {
    parent[v] = v;
    size_[v] = 1;
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (size_[a] < size_[b])
            swap(a, b);
        parent[b] = a;
        size_[a] += size_[b];
    }
}

void fnc()
{
    int n,k;
    cin>>n>>k;

    FOR(i,0,n)
        make_set(i);

    FOR(i,0,n)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if ( z==0 )
            union_sets(x-1,y-1);
    }

    FOR(i,0,n)
        find_set(i);
    sort(parent,parent+n);

    int ans = power(n,k,mod);
    int c=1;
    FOR(i,1,n)
    {
        if ( parent[i]==parent[i-1] )
            c++;
        else
        {
            ans = add(ans,-1*power(c,k,mod),mod);
            c=1;
        }
    }
    ans = add(ans,-1*power(c,k,mod),mod);
    cout<<ans;
}

int main(){
    int n=1;
    FOR(i,0,n)
    {
        fnc();
        cout<<"\n";
    }
}
