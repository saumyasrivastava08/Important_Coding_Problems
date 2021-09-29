#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	bsdk;
	ll t=1;
//	cin>>t;
	while(t--)
	{
	         string s,t;
	         cin>>s>>t;
	         if(s.size()!=t.size())
	         cout<<"No"<<"\n";
	         else
	         {
	         	ll f=1;
	         	for(ll i=0;i<s.size();i++)
	         	{
	         	      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') 
					   {
					     	if(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u') 
					     	
					     	 {
					     	 	
					     	 //	cout<<"Yes"<<"\n";
							 }
							 else
							 {
							 	f=0;
							 	break;
							// cout<<"No"<<"\n";	
							 }
					   } 
					   else if(s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u') 
					   {
					   	if(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u') 
					     	
					     	 {
					     	 	f=0;
					     	 	break;
					     	 //	cout<<"No"<<"\n";
							 }
							
					   }	
				}
				if(f)
				cout<<"Yes"<<"\n";
				else
				cout<<"No"<<"\n";
			 }
     
			 
	}
	
}
