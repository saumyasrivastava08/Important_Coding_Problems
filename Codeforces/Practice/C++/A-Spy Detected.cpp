#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    map<int,int> mp;
	    map<int,int>:: iterator itr;
	    for(int i=0;i<n;i++){
	        cin >>a[i];
	        mp[a[i]]++;
	    }
	    int b = 0;
	    for(itr=mp.begin();itr!=mp.end();itr++){
	        if(itr->second == 1){
	            b = itr->first;
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(a[i] == b) {
	            cout << i+1 << endl;
	            break;
	        }
	    }
	}
	return 0;
}
// Link : https://codeforces.com/contest/1512/problem/A