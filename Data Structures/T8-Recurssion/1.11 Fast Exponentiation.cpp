// Assumption: Powers are always non negative
#include<iostream>
using namespace std;
#define mod 1000000007
int fastExp(int num, int power) {

    if (power == 0) {
        return 1;
    }
    int fastExpRec = fastExp(num, power / 2) % mod;
  
    if (power % 2 != 0)
        return (fastExpRec * fastExpRec * num) % mod;
  
    else return (fastExpRec * fastExpRec) % mod;
}
int main() {
  
    int num, power;
    cin >> num >> power;
  
    cout << fastExp(num, power);
  
}
