// The problem link is https://www.codechef.com/problems/FLOW002
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, ans;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		ans = a % b;
		cout << ans << "\n";
	}
	return 0;
}
