#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
       long long int n;
       cin >> n;
       while(n%2 == 0){
           n = n /2;
       }
       if(n == 1){
           cout << "NO" << endl;
       }else{
           cout << "YES" << endl;
       }
    }
}
