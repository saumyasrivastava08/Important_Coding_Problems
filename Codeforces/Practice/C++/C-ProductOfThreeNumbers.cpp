
Problem : https://codeforces.com/problemset/problem/1294/C

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
    if (prime(n))
    {
        cout << "NO" << endl;
    }
    else
    {
        ll i=sqrt(n);
        ll a=-1,b=-1;
        for (; i>=2; i--)
        {
            if (n % i == 0)
            {
                if(a==-1&&b==-1)
                {
                    a=i;
                }
                else 
                {
                    b=a;
                    a=i;
                    if(a!=b&&(n/(a*b)!=a)&&(n/(a*b)!=b)&&(n%(b*a)==0))
                    {
                        break;
                    }
                }
            }
        }
        if(a!=-1&&b!=-1&&a!=b&&(n/(a*b)!=a)&&(n/(a*b)!=b)&&(n%(b*a)==0))
        {
            cout<<"YES"<<endl;
            cout<<b<<" "<<a<<" "<<n/(b*a)<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
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
    rep(i, t)
    {
        solve1();
    }
    return 0;
}
