//https://codeforces.com/contest/1517/problem/C
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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int v[n][n]={0};
 
 
    for(int i=0;i<n;i++){
        int x=i,y=i;
        for(int j=0;j<a[i];j++){
            v[x][y]=a[i];
            if(y>0 and v[x][y-1]==0){
                y--;
            }
            else x++;
 
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }

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