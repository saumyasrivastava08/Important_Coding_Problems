//https://codeforces.com/problemset/problem/1369/B
#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f=1;
    for(int i=1;i<s.size();i++){
        if(s[i]<s[i-1]) f=0;
    }
    if(f){
        cout<<s<<endl;
        return;
    }
 
    string s1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') break;
        s1.push_back('0');
    }
    s1.push_back('0');
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='0') break;
        s1.push_back('1');
    }
    cout<<s1<<endl;

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