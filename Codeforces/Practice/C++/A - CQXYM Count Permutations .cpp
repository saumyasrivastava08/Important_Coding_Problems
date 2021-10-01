#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
#define endl "\n"
#define mod 1000000007;
 
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        ll n;
        ll res = 1;
        cin >> n;
        ll start = 2*n;
        for(int i = start; i >= 3;i--){
            res = (res*i) % mod;
        }
        res = res % mod;
 
        cout<< res << endl;
    }
}

// Code By Imran Khan
