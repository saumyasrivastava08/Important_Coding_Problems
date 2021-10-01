//https://codeforces.com/problemset/problem/1176/B
#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n;
    cin>>n;
    int a[n];
    int cnt[3]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt[a[i]%3]++;
    }
    
    int ans=cnt[0];
    int x=min(cnt[1],cnt[2]);
    ans+=x;
    cnt[2]-=x;
    cnt[1]-=x;
    
    if(cnt[1]){
        ans+=cnt[1]/3;
    }
    if(cnt[2]) ans+=cnt[2]/3;
    cout<<ans<<endl;
}

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    int tt=1;
    cin >> tt;
    while(tt--){
    
        solve();
               
    }
}