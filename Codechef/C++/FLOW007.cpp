// The problem link is https://www.codechef.com/problems/FLOW007
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, num, rem, rev = 0;
	cin >> t;
	for(int i = 0; i < t; i++){
	    rev = 0;
	    cin >> num;
	    while(num > 0){
	        rem = num % 10;
	        rev = (rev * 10) + rem;
	        num = num / 10;
	    }
	    cout << rev << "\n";
	}
	return 0;
}
