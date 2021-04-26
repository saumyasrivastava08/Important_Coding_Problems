#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll t ;
	cin>>t;
	ll sum1=0,sum2=0,sum3=0;
	while(t--)
	{
		ll x,y,z;
		cin>>x>>y>>z;
		sum1=sum1+x;
		sum2=sum2+y;
		sum3=sum3+z;
	}
	if(sum1==0&&sum2==0&&sum3==0)
	cout<<"YES";
	else
	cout<<"NO";
}
