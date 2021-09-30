#include<bits/stdc++.h>
#define ll long long
#define rep(i,t) for(ll i=0;i<t;i++)
using namespace std;
void solve1(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll f=-1,l=-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='*'&&f==-1)
        {
            f=i;
        }
        if(s[i]=='*')
        {
            l=i;
        }
    }
    ll ans=0;
    if(f==l)
    {
        ans=1;
    }
    else
    {
        ans+=2;
        int i=f+k;
        while(i<n&&i<l)
        {   
            while(s[i]!='*')
            {
                i--;
            }
            ans++;
            i+=k;
        }
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    ll t;
    cin>>t;
    rep(i,t){
        solve1();
    }
    return 0;
}