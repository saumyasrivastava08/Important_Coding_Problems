// Name of question: New Year's Number
// Link of the queston: https://codeforces.com/problemset/problem/1475/B

#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<string>
#include <cstring>
#include<math.h>
 
using namespace std;
 
void solve(){
    int n;
 
    cin>>n;
 
    if (n%2020==0 || n%2021==0){
        cout<<"YES\n";
        return;
    }
 
    else {
        for (int i=1; i*2020<n; i++){
            for (int j=1; j*2021<n; j++){
                if ((2020*i)+(2021*j)==n){
                    cout<<"YES\n";
                    return;
                }
            }
        }
    }
 
    cout<<"NO\n";
}
 
int main(void){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
 
    cin>>t;
 
    while(t--){
        solve();
    }
 
    return 0;
}
