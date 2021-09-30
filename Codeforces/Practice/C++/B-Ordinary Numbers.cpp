#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve(){
	ll n;
	cin >> n;
	ll temp = 0,ans = 0;
	ll no = log10(n)+1;
	 for (ll i = 0; i < no; i++) {
  
        
        temp = temp * 10 + 1;
  
        for (ll j = 1; j <= 9; j++) {
  
            if (1 <= (temp * j)
                && (temp * j) <= n) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main(){
	fastio();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// Link : https://codeforces.com/contest/1520/problem/B