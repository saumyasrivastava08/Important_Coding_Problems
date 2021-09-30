// The problem link is https://www.codechef.com/problems/FLOW009
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double t, q ,p;
	double expense;
	cin >> t;
	for(int i = 0; i < t; i++){
	    cin >> q >> p;
	    if(q < 1000){
	        expense = (q * p) * 1.0;
	    }
	    else{
	        expense = (q * p) * 0.9;
	    }
	    std::cout << std::fixed;
        std::cout << std::setprecision(6);
        std::cout << expense << "\n";
	   
	}
	return 0;
}
