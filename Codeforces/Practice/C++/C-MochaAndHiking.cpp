
Problem : https://codeforces.com/problemset/problem/1559/C

#include <bits/stdc++.h>
#define ll long long
#define rep(i, t) for (ll i = 0; i < t; i++)
using namespace std;
bool func(int n, int a, int b)
{
    if (n == 1)
        return true;

    if (a != 1 && n % a == 0)
    {
        return func(n / a, a, b);
    }
    else if (n < b)
    {
        return false;
    }
    else
    {
        if (a == 1)
        {
            if (n % b == 1)
                return true;
            else
                return false;
        }
        else
        {
            return func(n - b, a, b);
        }
    }
}
void solve1()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    int ones=0,zeros=0;
    rep(j,n)
    {
        cin>>a[j];
        if(a[j]==1)
        ones++;
        else
        zeros++;
        
    }
    if(ones==n)
    {
        cout<<n+1<<" ";
        for(int i=1;i<=n;i++)
        cout<<i<<" ";
    }
    else if(zeros==n)
    {
        for(int i=1;i<=n;i++)
        cout<<i<<" ";
        cout<<n+1;
    }
    else if(a[0]==0)
    {
        ll f=-1,s=-1;
        bool flg=0;
        for(int i=0;i<=(n-1);i++)
        {
            if(flg==0&&a[i]==0&&a[i+1]==1)
            {
                cout<<i+1<<" "<<n+1<<" "<<i+2<<" ";
                i++;
                flg=1;
            }
            else
            {
                cout<<i+1<<" ";
            }
        }
    }
    else if(a[0]==1)
    {
        cout<<n+1<<" ";
        for(int i=0;i<n;i++)
        cout<<i+1<<" ";
        cout<<endl;
    }
    cout<<endl;

    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ll t;
    cin>>t;
    rep(i, t)
    {
        solve1();
    }
    return 0;
}
