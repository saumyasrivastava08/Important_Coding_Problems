// Ques - https://codeforces.com/problemset/problem/217/A
// Soltuion - https://codeforces.com/contest/217/submission/119750650

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define vi vector<int>
#define pb(x) push_back(x)
#define pii pair<int,int>
#define mp(x,y) make_pair(x,y)
#define ff first
#define ss second
#define mem(a,val) memset(a,val,sizeof(a))
#define FOR(i,k,n) for ( int i=k; i<n; i++ )

int parent[100];
int size_[100];

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void make_set(int v) {
    parent[v] = v;
    size_[v] = 1;
}

void union_sets(int a, int b){
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
    int n;
    cin>>n;
    vector<pii> a;

    FOR(i,0,n)
    {
        int x,y;
        cin>>x>>y;
        a.pb(mp(x,y));
    }

    FOR(i,0,n)
        make_set(i);
    
    FOR(i,1,1001)
    {
        int fi=-1;
        FOR(j,0,n)
        {
            if ( a[j].ff == i)
            {
                if ( fi!=-1)
                    union_sets(fi,j);
                fi=j;
            }
        }
    }
    FOR(i,1,1001)
    {
        int fi=-1;
        FOR(j,0,n)
        {
            if ( a[j].ss == i)
            {
                if ( fi!=-1 )
                    union_sets(fi,j);
                fi=j;
            }
        }
    }

    FOR(i,0,n)
        find_set(i);

    sort(parent,parent+n);
    cout<<unique(parent,parent+n)-parent-1;

}

int main(){
    fnc();
    cout<<"\n";
}