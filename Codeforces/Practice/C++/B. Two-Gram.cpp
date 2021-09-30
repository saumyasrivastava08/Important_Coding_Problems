//The name of the question is Two-Gram
//Link for the question: https://codeforces.com/problemset/problem/977/B

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
 
    char a[n];
 
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
 
 
    int c=0;
 
    int max = 0;
    char rep[2];
    rep[0]=a[0];
    rep[1]=a[1];
    int j=0;
    for (int i=0; i<n-1; i++){
        c=0;
        for (j=0; j<n-1; j++){
            if ((a[j]==a[i]) && (a[j+1]==a[i+1])){
                c++;
            }
        }

 
        if (c>max){
            max=c;
            rep[0]=a[i];
            rep[1]=a[i+1];
        }
    }
 
    cout<<rep[0]<<rep[1]<<'\n';
}
 
int main(void){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
 
    while(t--){
        solve();
    }
 
    return 0;
}
