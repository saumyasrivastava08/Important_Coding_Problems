// The problem link is https://www.codechef.com/problems/TWOVSTEN
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t, num;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> num;
        if(num % 10 == 0){
            cout << 0 << "\n";
        }
        else if(num % 10 == 5){
            cout << 1 << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    }
	return 0;
}
