// The problem link is https://www.codechef.com/problems/CHFRICH
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
	    int A, B, X;
	    cin >> A >> B >> X;
	    cout << (B - A) / X << "\n";
	}
	return 0;
}
