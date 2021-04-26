#define ll long long 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll n,m,z;
	cin>>n>>m>>z;
	ll c1=0,c2=0, i=2;
	ll p=n,k=m;
      if(m>=n)
      {
      	while(m<=z)
      	{
      		  
      	//	cout<<m<<"mm \n";
      		if(m%n==0)
      		{
      	
      			c1++;
			  }
      		  
      		  m=k*i;
      		  i++;;
      	//	  cout<<i<<"ii";
		}
		cout<<c1;
	  }
	  else
	  {
	  	while(n<=z)
	  	{
	  		if(n%m==0)
	  		c2++;
	  		n=p*i;
	  		i++;
	     }
	     cout<<c2;
	  }
	
	
}
