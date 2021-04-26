#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
   cin>>t;
   while(t--)
   {
   	long long n,m,x;
   	cin>>n>>m>>x;
   	 x=x-1;
   	 if(x==0)
   	 {
   	 	cout<<1<<"\n";
		}
		else
		{
			long long r= x%n,col=x/n;
			cout<<(r*m)+col+1<<"\n";
		}
   	
   }
}
