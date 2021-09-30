//https://codeforces.com/contest/1473/problem/C
#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n,k;
        cin>>n>>k;
        int temp=2*k-n-1;
        for(int i=1;i<=temp;i++)
            cout<<i<<" ";
        for(int i=k;i>temp;i--)
            cout<<i<<" ";
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