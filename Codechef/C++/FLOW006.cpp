// The problem link is https://www.codechef.com/problems/FLOW006
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, rem, sum=0;
	cin >> t;
	while(t--){
	    int num;
	    cin >> num;
        sum = 0;
	    for(int i = 0; num != 0; i++){
	        rem = num % 10;
	        sum += rem;
	        num = num / 10;
	    }
	    cout << sum << "\n";
	}
	return 0;
}
