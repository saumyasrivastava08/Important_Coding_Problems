#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	 string s;
    cin >> s;
 
    for (int i = 0; i < s.size(); i++) {
        int p = s[i] - '0';
        if (i == 0 and p == 9)continue;
        if (p >= 5) {
            p = 9 - p;
            s[i] = p + '0';
        }
    }
    cout << s ;
}
