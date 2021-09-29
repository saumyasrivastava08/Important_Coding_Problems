#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	bsdk;
	ll a,b;
	cin>>a>>b;
	ll c=0,f=0;
	while(true)
	{
		if(a>b)
		{
			f=1;
			break;
			
		}
		a = a * 3;
		b = b * 2;
		c++;
	}
	cout<<c;
}

