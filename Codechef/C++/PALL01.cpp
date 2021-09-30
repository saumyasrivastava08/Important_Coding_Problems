#include <bits/stdc++.h> 
using namespace std;

int palindrome(int num){
    int pal = num;
    int digit,rev=0;
    do{
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
     }while (num != 0);
    if(pal == rev){
        return 0;
    }
    else{
        return 1;
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,i;
	cin >> t;
	for(i=0;i<t;i++){
	    cin >> n;
	    if(palindrome(n) == 0){
	        cout << "wins" << "\n";
	    }
	    else{
	        cout << "loses" << "\n";
	    }
	}
	return 0;
}
