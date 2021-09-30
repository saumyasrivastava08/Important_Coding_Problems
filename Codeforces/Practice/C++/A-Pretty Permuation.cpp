	/*kjasir23*/
#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve(){
    int n;
	cin >> n;
	if(n%2==0){
    vector<int> v;
    for(int i=1;i<=n;i+=2){
        cout<<i+1<<" "<<i<<" ";
    }
        cout<<endl;
    }
    else{
        for(int j=1;j<n-2;j+=2){
            cout<<j+1<<" "<<j<<" ";
        }
        cout<<n-1<<" "<<n<<" " << n-2;
        cout<<endl;   
	}	
}
int main(){
	fastio();
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}
}

// Link : https://codeforces.com/problemset/problem/1541/A
