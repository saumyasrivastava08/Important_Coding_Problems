//https://codeforces.com/contest/1567/problem/A
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
    string s;
    cin>>s;
    string s1=s;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            s1[i]='D';
        }
        else if(s[i]=='D'){
            s1[i]='U';
        }
        else s1[i]=s[i];
    }
    cout<<s1<<endl;

}

signed main(){
    fastio();
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    int tt=1;
    cin >> tt;
    while(tt--){
           
        solve();
           
    }
}