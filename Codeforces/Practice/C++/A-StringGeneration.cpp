//https://codeforces.com/contest/1461/problem/A
#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n,k;
        cin>>n>>k;
        string s="abc";
        for(int i=1;i<=n/3;i++){
            cout<<s;}
        if(n%3==1) cout<<"a";
        else if(n%3==2) cout<<"ab";
        cout<<endl;
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