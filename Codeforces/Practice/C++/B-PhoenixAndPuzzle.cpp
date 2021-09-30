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
    if(n!=1&&(floor(sqrt(n/4.00))==sqrt(n/4.00)||floor(sqrt(n/2.00))==sqrt(n/2.00)))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
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