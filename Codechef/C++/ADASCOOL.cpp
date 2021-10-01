// The problem link is https://www.codechef.com/problems/ADASCOOL
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n1, n2;
        cin >> n1 >> n2;
        if(n1 % 2 != 0 && n2 % 2 != 0){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES" << "\n";
        }
    }
	return 0;
}
