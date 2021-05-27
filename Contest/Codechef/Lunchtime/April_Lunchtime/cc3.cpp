#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	bsdk;
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
	     string s ;
	      	cin>>s;
	      	ll c=0,f=0,ff=0;
	      for(ll i=0;i<n;i++)
	      {
	      	if(s[i]=='1')
	      	
	      	 c++;
	      	 if(s[i]=='0')
	      	 f++;
	      	 ll jj = c+f;
		  	ll pp = ((c*100)/jj);
	      	 if(pp>=50)
	      	 {
	      	 	
	      	 	ff=1;
	      	 	break;
			 }
		  }
		  
	
		   if(ff)
		   cout<<"YES"<<endl;
		  	else
		  	{
		  		ll k = ((c*100)/n);
		  		if(k>=50)
		  		 cout<<"YES"<<endl;
		  		 else
		  		 	cout<<"NO"<<endl;
			  }

	}
	
}
