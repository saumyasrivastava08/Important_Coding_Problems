#include<bits/stdc++.h>
#define ll long long
#define rep(i,t) for(ll i=0;i<t;i++)
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
void solve1(){
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    rep(j,n)
    cin>>a[j];

    ll rem=0,bags=0;
    rem=a[0]%k;bags=a[0]/k;
    if(n==1)
    {
        bags=ceil((a[0]+rem)/(double)k);
    }

    for(int i=1;i<n;i++)
    {
        if(i==(n-1))
        {
            bags+=ceil((a[i]+rem)/(double)k);
            continue;
        }
        if((a[i]+rem)%k==0)
        {
            bags+=(a[i]+rem)/k;
            rem=0;
        }
        else
        {
            ll temp=(a[i]+rem)%k;
            if(temp<=a[i])
            {
                bags+=(a[i]+rem)/k;
                rem=temp;
            }
            else
            {
                bags+=ceil((a[i]+rem)/(double)k);
                rem=0;
            }
        }
    }
    cout<<bags<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    ll t;
    t=1;
    rep(i,t){
        solve1();
    }
    return 0;
}