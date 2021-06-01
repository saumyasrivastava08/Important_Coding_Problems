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
	   ll ff=0;
	 //  string ss="";
	 vector<string>s(n);
	 for(ll i=0;i<n;i++)
	 {
	 	cin>>s[i];
	 }
	   
	   for(ll j=0;j<n;j++)
	   {
	       	
	      ll f=0;
	     //	string ss="";
	     if(s[j][0]>='a' && s[j][0]<='m')
	     {
	     	for(auto it:s[j])
	     	{
	     		if(it>='a' && it<='m')
	     		  continue;
	     		  else
	     		  {
	     		  	f=1;
	     		  	break;
				   }
			 }
		 }
		 else  if(s[j][0]>='N' && s[j][0]<='Z')
	     {
	     	for(auto it:s[j])
	     	{
	     		if(it>='N' && it<='Z')
	     		  continue;
	     		  else
	     		  {
	     		  	f=1;
	     		  	break;
				   }
			 }
		 }
		 else  
		 {
		 	f=1;
		 //	cout<<"NO"<<endl;
		 //	break;
		 }
		 if(f)
		 {
		 	cout<<"NO"<<endl;
		 	ff=1;
		 	break;
		 }
		
	}
	   if(!ff)
	   cout<<"YES"<<endl; 
	}
}


