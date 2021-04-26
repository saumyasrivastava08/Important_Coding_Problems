#include<bits/stdc++.h>
using namespace std;
bool prime [10000001];
void seive()
{
	memset(prime, true, sizeof(prime));
    for (long long i = 2; i * i <=10000001 ; i++)
    { 
        if (prime[i] == true) 
        {
            for (long long j = i * i; j <= 10000001; j += i)
                prime[j] = false;
        }
    }
}
long long func(long long r)
{
	while(r)
	{
		if(prime[r]){
			cout<<r<<"\n";
			break;
			}
			r++;
	}
	return r;
}
int main()
{
	
	long long t;
	cin>>t;
	seive();
	while(t--)
	{
		long long l,r;
		cin>>l>>r;
		r++;
		func(r);
	}	
}
