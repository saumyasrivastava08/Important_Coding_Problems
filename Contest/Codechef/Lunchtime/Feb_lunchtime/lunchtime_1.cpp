#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
			long long n,k;
         	cin>>n>>k;
         	if(n%k==0)
         	cout<<"0"<<"\n";
         	else if(n<k)
            cout<<n<<"\n";
            else
            {
            	long long d = n/k;
            	long long p = d*k;
            	cout<<(n-p)<<"\n";
			}
	}

	
}
