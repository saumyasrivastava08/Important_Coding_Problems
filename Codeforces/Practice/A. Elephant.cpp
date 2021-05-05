#define ll long long
#define bsdk std::ios::sync_with_stdio(false)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	bsdk;
	ll n;
	cin>>n;
	ll c=0,f=0;
	while(n!=0)
	{
		if(n>=5)
		{
			n = n- 5;
			c++;
		}
		else if(n<5 && n>=4)
		{
			n= n-4;
			c++;
		}
		else if(n<4 && n>=3)
		{
			n = n-3;
			c++;
		}
		else if(n<3 && n>=2)
		{
			n = n -2;
			c++;
		}
		else if(n<2 && n>=1)
		{
			n = n - 1;
			c++;
		}
	}
	cout<<c;
	
}

