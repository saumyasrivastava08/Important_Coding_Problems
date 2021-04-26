//Print 1 to N
#include<bits/stdc++.h>
using namespace std;
int Nto1(int n)
{
	if(n==0)
	return 0;

	Nto1(n-1);
		cout<<n<<" ";
}
int main()
{
	int N;
	cin>>N;
	Nto1(N);
}
