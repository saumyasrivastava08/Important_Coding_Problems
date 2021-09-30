
Problem: https://codeforces.com/contest/1470/problem/A

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
    ll n, k;
    cin >> n >> k;
    vector<ll> b(k);
    list<ll> b_copy;
    vector<ll> a(n);
    rep(j, n)
            cin >>
        a[j];
    rep(j, k)
    {
        cin >> b[j];
        b_copy.push_back(b[j]);
    }
    sort(a.begin(),a.end(),greater<ll>());
    ll ceiling = ceil(k / 2.00);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {

        if (b[a[i] - 1] > b_copy.front())
        {
            ans += b_copy.front();
            b_copy.pop_front();
        }
        else
        {
            ans += b[a[i] - 1];
        }
    }
    cout << ans << endl;
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
