//https://codeforces.com/problemset/problem/1355/A
#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n,m;
    cin>>n>>m;
    m--;
    while(m--){
        auto s=to_string(n);
        int mn=*min_element(s.begin(),s.end())-'0';
        int mx=*max_element(s.begin(),s.end())-'0';
 
        if(mn==0) break;
        n+=mn*mx;
    }
    cout<<n<<endl;

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