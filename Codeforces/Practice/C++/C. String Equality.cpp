// https://codeforces.com/problemset/problem/1451/C
// https://codeforces.com/contest/1451/submission/130009794

#include <bits/stdc++.h>

using namespace std;

#define mem(a,val) memset(a,val,sizeof(a))
#define FOR(i,k,n) for ( int i=k; i<n; i++)

void fnc()
{
    int n,k;
    cin>>n>>k;

    string s1,s2;
    cin>>s1>>s2;

    int dp1[27],dp2[27];
    mem(dp1,0);
    mem(dp2,0);
    for ( auto ch : s1 )
        dp1[ch-'a']++;
    for ( auto ch : s2 )
        dp2[ch-'a']++;

    bool flag = true;
    FOR(i,0,26)
    {
        if ( dp1[i]<dp2[i] || (dp1[i]-dp2[i])%k )
           flag = false;
        dp1[i+1]+= dp1[i]-dp2[i];
    }
    cout<<(flag?"Yes":"No");
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