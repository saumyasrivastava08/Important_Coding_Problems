//https://codeforces.com/contest/1473/problem/B
#include<bits/stdc++.h>
using namespace std;

void solve(){
    
        string s; cin>>s;
        string t; cin>>t;
        int g = gcd(s.length(), t.length());
        int l = (s.length()*t.length())/g;
        int a = l/s.length();
        int b = l/t.length();
        string x1 = "";
        while(a--){
            x1 += s;
        }
        string y1 = "";
        while(b--){
            y1 += t;
        }
        if(x1 == y1){
            cout<<x1<<endl;
        }
        else
            cout<<"-1"<<endl;
 
 
    

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