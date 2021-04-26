#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll n;
	cin>>n;
	if(n%4==0 && n!=0)
	cout<<6;
	else if(n%4==1)
	cout<<8;
	else if(n%4==2)
	cout<<4;
	else if(n%4==3)
	cout<<2;
	if(n==0)
	cout<<1;
}
