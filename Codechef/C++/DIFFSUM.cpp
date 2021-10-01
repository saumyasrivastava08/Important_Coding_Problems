// The problem link is https://www.codechef.com/problems/DIFFSUM
#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cin >> num1 >> num2;
	if(num1 > num2){
	    cout << num1 - num2;
	}
	else{
	    cout << num1 + num2;
	}
	return 0;
}
