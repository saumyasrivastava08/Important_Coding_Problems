// The problem link is https://www.codechef.com/problems/DECINC
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int num;
	cin >> num;
	if(num % 4 == 0){
	    num = num + 1;
	}
	else{
	    num = num - 1;
	}
	cout << num;
	return 0;
}
