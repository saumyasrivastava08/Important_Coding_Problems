#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve(){
	int n;
	cin >> n;
	if(n == 1) {
		cout << 1 << endl;
		return;
	}
	if(n == 2){
		cout << -1 << endl;
		return;
	}
	vector<int> v;
	for(int i=1;i<=n*n;i +=2){
	    v.push_back(i);
	}
	for(int i=2;i<=n*n;i +=2){
	    v.push_back(i);
	}
	int i;
	for(i=1;i<=v.size();i++){
	    cout << v[i-1] <<" ";
	    if(i%n == 0) cout << endl;
	}

}

int main(){
	fastio();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// Link : https://codeforces.com/contest/1520/problem/C