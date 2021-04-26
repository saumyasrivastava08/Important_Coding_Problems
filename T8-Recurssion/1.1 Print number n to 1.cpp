//Print n to 1
#include<bits/stdc++.h>
using namespace std;

int Nto1(int n)
{
	if(n==0)
	return 0;
	cout<<n<<" ";
	Nto1(n-1);
}
int main()
{
	int N;
	cin>>N;
	Nto1(N);
}
 
