
//Sidnaaz forever
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
ll pairs(ll number)
{
    return((number*(number-1))/2);
}
int main()
{
	bsdk;
	ll t=1;
	//cin>>t;
    ll k=1;
	while(t--)
	{
        ll n,m;
        cin>>n>>m;
       // ll mi=INT_MIN;
        ll mod= n%m;
        ll quo = n/m;
        ll mi = (m-mod)*pairs(quo) + mod*(pairs(quo+1));
        ll ma = pairs(n-m+1);
        cout<<mi<<" "<<ma;
        
    }
}


