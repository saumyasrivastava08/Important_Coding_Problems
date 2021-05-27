#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long c;
		cin>>c;
		long long p=c,d=log2(c)+1;
		long long ii=pow(2,d-1);
         	 ii=ii-1;
	   long long a = ii^c;
	 cout<<a*ii<<"\n";
}
}

