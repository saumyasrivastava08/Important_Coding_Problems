#include<bits/stdc++.h>
using namespace std;

int sumdigits(int n)
{
	if(n==0)
	return 0;
	else
	return (n%10 + sumdigits(n/10));
	
}

int main()
{
	int n;
	cin>>n;
	cout<<sumdigits(n);
}
