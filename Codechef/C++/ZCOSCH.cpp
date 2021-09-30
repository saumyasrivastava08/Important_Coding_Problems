#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int per;
	cin >> per;
	if(per <=0 or per > 100){
	    cout << 0;
	}
	else if(per >=1 && per <= 50){
	    cout << 100;
	}
	else{
	    cout << 50;
	}
	return 0;
}

