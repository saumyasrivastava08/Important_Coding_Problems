//Name of question: Odd Divisor
//Link for the question: https://codeforces.com/problemset/problem/1475/A

#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<string>
#include <cstring>
#include<math.h>
 
using namespace std;
 
typedef unsigned long long int lli;
 
int is_prime(int n) {
    // Assumes that n is a positive natural number
    // We know 1 is not a prime number
    if (n == 1) {
        return 0;
    }
 
    int i = 2;
 
    while (i*i <= n) {
        if (n % i == 0) {
            return 0;
        }
        i += 1;
    }
 
    return 1;
}
 
void solve(){
    lli n;
 
    cin>>n;
 
    if (n%2==1){
        cout<<"YES\n";
    }
 
    else {
        lli k  = n;
 
        while(k%2==0){
            k = k/2;
        }
        //cout<<"now k is "<<k<<'\n';
 
        if (k>1){
            cout<<"YES\n";
            return;
        }
 
        else {
            cout<<"NO\n";
        }
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
