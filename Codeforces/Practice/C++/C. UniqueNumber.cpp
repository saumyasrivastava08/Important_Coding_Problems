//The following code is the solution for the Codeforces question names Unique Number
//Link for the question: https://codeforces.com/problemset/problem/1462/C

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
 
    if (n>45){
        cout<<-1<<'\n';
        return;
    }
 
    else {
        int a[9]={0};
        int i=9;
        int j=0;
        while(n>0){
            if (n-i>=0){
                n = n-i;
                a[j]=i;
                j++;
            }
 
            i--;
        }
 
        for (int k=j-1; k>=0; k--){
            cout<<a[k];
        }
 
        cout<<'\n';
    }
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
