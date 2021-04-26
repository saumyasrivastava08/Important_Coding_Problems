#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll k,n,w;
	cin>>k>>n>>w;
	ll i=1, p=0;
	while(i<=w)
	{
		p = p+(i*k);
		i++;
	}
	cout<<(p-n);
}

