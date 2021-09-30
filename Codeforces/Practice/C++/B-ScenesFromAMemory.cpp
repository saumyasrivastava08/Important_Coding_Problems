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

set<ll> vector_of_strings;
void subString(string s, int n)
{
    // Pick starting point in outer loop
    // and lengths of different strings for
    // a given starting point

    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
        {
            stringstream geek(s.substr(i, len));
            ll x = 0;
            geek >> x;
            if (!(prime(x)))
                vector_of_strings.insert(x);
        }
}
void permute(string a, int l, int r)
{
    // Base case
    if (l == r)
        subString(a, a.length());
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l + 1, r);

            //backtrack
            swap(a[l], a[i]);
        }
    }
}
void solve1()
{
    ll k;
    cin >> k;
    string s;
    cin >> s;
    bool cond = 0;
    set<char> set_char(s.begin(), s.end());
    for (char c : set_char)
    {
        if (!(prime((ll)(c - '0'))))
        {
            cond = 1;
            break;
        }
    }
    if (cond)
    {
        for (char c : set_char)
        {
            if (!(prime((ll)(c - '0'))))
            {
                cout << 1 << endl;
                cout << c << endl;
                break;
            }
        }
    }
    else
    {
        map<ll, ll> freq;
        freq.insert({2, 0});
        freq.insert({3, 0});
        freq.insert({5, 0});
        freq.insert({7, 0});
        ll max_freq = 0;
        for (int i = 0; i < s.length(); i++)
        {
            freq[(ll)(s[i] - '0')]++;
            max_freq = max(max_freq, freq[(ll)(s[i]-'0')]);
        }
        if (max_freq >= 2)
        {
            for (auto elem : freq)
            {
                if (elem.second >= 2)
                {
                    cout<<2<<endl;
                    cout << elem.first<<elem.first << endl;
                    break;
                }
            }
        }
        else
        {
            for (auto elem : vector_of_strings)
            {
                string temp = to_string(elem);
                int t = 0;
                for (int i = 0; i < s.length(); i++)
                {
                    if (s[i] == temp[t])
                    {
                        t++;
                    }
                }
                if (t == temp.length())
                {
                    cout << t << endl;
                    cout << elem << endl;
                    break;
                }
            }
        }
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
    cin >> t;
    permute("2357", 0, 3);
    // for(auto elem:vector_of_strings)
    // cout<<elem<<endl;
    rep(i, t)
    {
        solve1();
    }
    return 0;
}