//https://codeforces.com/problemset/problem/1561/C
/*    MOAZZAM07    */
    

#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define NL "\n"
#define N 1000000007
const int MOD = 1e9 + 7;
const int INF = 1e9;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif


void solve(){
        
    int n;
    cin>>n;
    int a[n];
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        
        int mx=0;
        for(int j=0;j<k;j++){
            int x;
            cin>>x;
            mx=max(mx,x-j+1);    
        }
        v.push_back({mx,k});
    }
    sort(v.begin(),v.end());
    
    int l=v[0].first,r=v[n-1].first;
    int ans=0;
    
    while(l<=r){
        int mid=(l+r)/2;
        int cur=mid,f=1;
        for(int i=0;i<n;i++){
            if(v[i].first<=cur){
                cur+=v[i].second;
            }
            else{
                f=0;
                break;
            }
        }
        if(f==0){
            l=mid+1;
        }
        else{
            ans=mid;
            r=mid-1;
        }
    }
    cout<<ans<<endl;

}

signed main(){
    fastio();
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    int tt=1;
    //cin >> tt;
    while(tt--){
           
        solve();
           
    }
}