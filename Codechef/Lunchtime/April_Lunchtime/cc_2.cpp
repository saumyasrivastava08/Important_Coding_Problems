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
		ll a,b,d;
	      cin>>a>>b>>d;
	      ll cc=0,ff=0;
	      while(a--)
	      {
	      	string s ;
	      	cin>>s;
	      
	      		if(s[0]=='E'||s[0]=='Q'||s[0]=='U'||s[0]=='I'||s[0]=='N'||s[0]=='O'||s[0]=='X')
	      		{
	      			cc = cc + (b);
	      		//	cout<<cc;
				}
				else
				ff = ff + d;
			  
		  }
		  if(cc==ff)
		  cout<<"DRAW"<<endl;
		  else if(cc>ff)
		  cout<<"SARTHAK"<<"\n";
		  else
		  cout<<"ANURADHA"<<"\n";          
        
     
	}
	
}
