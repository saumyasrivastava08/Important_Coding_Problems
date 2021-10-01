//https://codeforces.com/contest/1539/problem/B
#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int> m;
    int x='a';
    for(int i=1;i<=26;i++){
        m[x]=i;
        x++;
    }
    int pref[n+1];
    auto it=m.find(s[0]);
    pref[1]=it->second;
    for(int i=1;i<=n;i++){
        it=m.find(s[i-1]);
        pref[i]=pref[i-1]+it->second;
    }
    while(k--){
        int a,b;
        cin>>a>>b;
        cout<<pref[b]-pref[a-1]<<endl;
    }

}

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    int tt=1;
    //cin >> tt;
    while(tt--){
    
        solve();
               
    }
}