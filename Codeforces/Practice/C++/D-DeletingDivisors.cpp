//https://codeforces.com/contest/1537/problem/D
#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n;
    cin>>n;
    int cnt=0;
    
    while(n%2==0)
    {
        cnt++;
        n/=2;
    }
    if(cnt==0){
        cout<<"Bob\n";
        return;
    }
    if(n>1 or cnt%2==0){
        cout<<"Alice\n";
        return;
    }
    cout<<"Bob\n";

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