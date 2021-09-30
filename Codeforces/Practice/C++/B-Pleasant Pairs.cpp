#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve(){
	ll n;
	cin >> n;
	ll a[n+1];
	for(ll i=1;i<=n;i++){
		cin >> a[i];
	}
	int count = 0;
	for(ll i=1;i<=n;i++){
		for(ll j=a[i] - i;j<=n;j+=a[i]){
			if(j >= 0){
				if(a[i]*a[j] == i+j && i < j){
					count++;
				}
			}
		}
	}
		cout << count << endl;
	}
int main(){
	fastio();
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}
}

// Link : https://codeforces.com/problemset/problem/1541/B
