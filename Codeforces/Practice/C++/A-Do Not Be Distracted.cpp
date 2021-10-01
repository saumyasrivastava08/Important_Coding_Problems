#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve(){
	int no;
    cin>>no;
    string s;
    cin>>s;
    for(int i=0;i<no;i++){
    	if(s[i]!=s[i+1])
    	{
    		for(int j=i+1;j<no;j++){
    			if(s[j]==s[i]){
    				cout<<"NO" << endl;
    				return;
    			}
    		}
    	}
    }
    cout<<"YES" << endl;
}

int main(){
	fastio();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// Link : https://codeforces.com/contest/1520/problem/A
