#include<bits/stdc++.h>
#define int long long int
using namespace std;
int power(int x, unsigned int y, int p)
{
    int res = 1; 
    x = x % p;
    if (x == 0) 
	return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int ans=power(n,k,1000000007);
		cout<<ans<<"\n";
	}
}
