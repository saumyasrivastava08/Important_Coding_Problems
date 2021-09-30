#include <bits/stdc++.h>
#define ll long long
#define rep(i, t) for (ll i = 0; i < t; i++)
using namespace std;
long long prime(int n)
{
    if (n == 1)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return 0;
        }
    }
    return 1;
}
void solve1()
{
    ll n;
    cin >> n;
    vector<pair<ll, vector<ll>>> a(n);
    vector<pair<ll, ll>> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        ll maxi = INT_MIN;
        for (int j = 0; j < a[i].first; j++)
        {
            ll temp;
            cin >> temp;
            a[i].second.push_back(temp);
            maxi=max(a[i].second.at(j)-j,maxi);
        }
        b[i].first = maxi;
        b[i].second = a[i].first;
    }
    sort(b.begin(),b.end());
    ll sum=0;
    ll ans=INT_MIN;
    for(int i=0;i<b.size();i++)
    {
        ans=max(ans,b[i].first-sum);
        sum+=b[i].second;
    }
    cout<<ans+1<<endl;
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
    cin >> t;
    rep(i, t)
    {
        solve1();
    }
    return 0;
}