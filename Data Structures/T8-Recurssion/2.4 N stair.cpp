#include <iostream>
using namespace std;

int NStairs(int n, int k) {
	int s = 0;
	if (n < 0) {
		return 0;
	}
	if (n == 0) {
		return 1;
	}
	for (int i = 1; i <= k; ++i)
	{
		s += NStairs(n - i, k);
	}
	return s;
}
int main(){
  int n, k; cin >> n >> k;
  cout << NStairs(n, k) << endl;
}

