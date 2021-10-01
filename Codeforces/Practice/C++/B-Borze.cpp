//https://codeforces.com/contest/32/problem/B
#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    string s;
    cin>>s;
    int i=0;
    while(i<s.size()){
        if(s[i]=='.') {cout<<0; i++;}
        else if(s[i]=='-' && s[i+1]=='.') {cout<<1; i+=2;} 
        else if(s[i]=='-' && s[i+1]=='-') {cout<<2; i+=2;}
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