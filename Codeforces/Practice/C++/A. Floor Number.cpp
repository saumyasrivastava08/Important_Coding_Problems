#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	
    ll n,x,i,j,ans=0;
    cin>>n>>x;
    ll s=2;
    ans=1;
    while(s<n) s+=x,ans++;
    cout<<ans<<endl;
	 
	 
	}
}
