#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define MOD 1000000007
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
     ll n,a;
    cin>>n>>a;
 
    ll noOfOdds,noOfEvens;
    if(n&1){
        noOfOdds = n/2 + 1;
        noOfEvens = n-noOfOdds; 
    }
    else{
        noOfEvens = (n)/2;
        noOfOdds = n/2; 
    }
 
    if(a <= noOfOdds){
        cout<<1+(a-1)*2;
    }
    else {
        a -= noOfOdds;  
        cout<<2+(a-1)*2;
    }
 
    return 0;
}
