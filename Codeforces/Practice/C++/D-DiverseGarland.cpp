
Problem : https://codeforces.com/problemset/problem/1108/D

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
    string s;
    cin >> s;
    ll ans = 0, i;
    char arr[] = {'R', 'G', 'B'};
    for (i = 1; i < (n - 1); i++)
    {
        if (s[i - 1] == s[i] && s[i] == s[i + 1])
        {
            ans++;
            if (arr[0] != s[i])
            {
                s[i] = arr[0];
            }
            else if (arr[1] != s[i])
            {
                s[i] = arr[1];
            }
            else if (arr[2] != s[i])
            {
                s[i] = arr[2];
            }
        }
        else if (s[i - 1] == s[i])
        {
            ans++;
            if (arr[0] != s[i] && arr[0] != s[i + 1])
            {
                s[i] = arr[0];
            }
            else if (arr[1] != s[i] && arr[1] != s[i + 1])
            {
                s[i] = arr[1];
            }
            else if (arr[2] != s[i] && arr[2] != s[i + 1])
            {
                s[i] = arr[2];
            }
        }
    }
    if (s[i - 1] == s[i])
    {
        ans++;
        if (arr[0] != s[i])
        {
            s[i] = arr[0];
        }
        else if (arr[1] != s[i])
        {
            s[i] = arr[1];
        }
        else if (arr[2] != s[i])
        {
            s[i] = arr[2];
        }
    }
    cout << ans << endl;
    cout << s << endl;
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
    // cin>>t;
    t = 1;
    rep(i, t)
    {
        solve1();
    }
    return 0;
}
