
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
	ll t;
	cin>>t;
  //  ll k=1;
	while(t--)
	{
        ll n,m;
        cin>>n>>m;
       // ll mi=INT_MIN;
        ll i=1;
        while(i<m)
        {
            m = m -i;
            i++;
        }
        string s (n,'a');
        s[n-i-1]='b';
        s[n-m]='b';
        cout<<s<<endl;
    }
}


