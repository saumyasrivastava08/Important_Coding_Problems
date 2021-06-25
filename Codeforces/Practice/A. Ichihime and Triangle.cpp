#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<b<<" "<<c<<" "<<(min(b+c-1,d))<<"\n";
	}
}

