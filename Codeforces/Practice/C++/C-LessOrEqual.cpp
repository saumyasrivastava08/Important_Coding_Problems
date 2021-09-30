//https://codeforces.com/problemset/problem/977/C
#include<bits/stdc++.h>
using namespace std;

void solve(){
    
     int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(k==0){
        if(a[0]==1) cout<<-1<<endl;
        else cout<<1<<endl;
        return;
    }
    int ans=a[k-1];
    int ans1=0;
    for(int i=0;i<n;i++){
        if(a[i]<=ans){
            ans1++;
        }
    }
    if(ans1==k){
        cout<<ans;
    }
    else cout<<-1<<endl;
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