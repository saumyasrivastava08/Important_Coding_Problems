//https://codeforces.com/problemset/problem/1365/C
#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n;
    cin>>n;
    int a[n+1],b[n+1];
    
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        
        a[x]=i;
        
    }
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        b[x]=i;
    }   
    map<int,int> m;
    for(int i=1;i<=n;i++){
        m[(n+a[i]-b[i])%n]++;
    }
    int ans=0;
    for(auto x:m){
        ans=max(ans,x.second);
    }
    cout<<ans<<endl;
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