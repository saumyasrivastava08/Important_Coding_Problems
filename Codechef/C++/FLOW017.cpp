// The problem link is https://www.codechef.com/problems/FLOW017
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t, a, b, c;
	cin >> t;
	for(int i = 0; i < t; i++){
	    cin >> a >> b >> c;
	    if(a < max(b,c) && a > min(b,c)){
            cout<<a<<endl;
        }
        else if(b > min(a,c) && b < max(a,c)){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
	}
	return 0;
}
