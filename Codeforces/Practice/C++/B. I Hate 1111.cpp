// https://codeforces.com/problemset/problem/1526/B
// https://codeforces.com/contest/1526/submission/124875604

#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for ( int i=k; i<n; i++ )

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void fnc()
{
    int n;
    cin>>n;
    while(n>=0)
    {
        if ( n%11==0 )
        {
            cout<<"YES";
            return;
        }
        n-=111;
    }
    cout<<"NO";
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