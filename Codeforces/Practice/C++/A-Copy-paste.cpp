//https://codeforces.com/contest/1417/problem/A
#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n,k,cnt=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int temp=a[0];
        for(int i=1;i<n;i++){
            if(a[i]>=k)
                break;
            while(a[i]+temp<=k){
                   a[i]+=temp;
                   cnt++;
            }
        }
    
        cout<<cnt<<endl;
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