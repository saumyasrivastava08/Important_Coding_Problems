//https://codeforces.com/contest/1433/problem/D
#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n;
    cin>>n;
    int a[n];
    set<int> s;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
        
    }
    if(s.size()==1){
        cout<<"NO"<<endl;
        return;
    }
    
    cout<<"YES"<<endl;
    int x=0;
    for(int i=1;i<n;i++){
        if(a[i]!=a[0]){
           x=i;
           v.push_back(make_pair(1,i+1)); 
        }
    }
    
    for(int i=1;i<n;i++){
        if(a[i]==a[0]){
            v.push_back(make_pair(x+1,i+1));
        }
    }
    debug(v)
    for(auto x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }
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