//https://codeforces.com/contest/1537/problem/C
#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int mn=MOD;
    int x=0,y=0;
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]<mn){
            mn=a[i+1]-a[i];
            x=i;
            y=i+1;
        }
    }
    cout<<a[x]<<" ";
    for(int i=y+1;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<x;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[y]<<endl;
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