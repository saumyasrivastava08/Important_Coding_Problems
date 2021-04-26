#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int f=1;
	
	for(int i=1;i<s.length();i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			f=0;
			break;
		}
		
	}
   
	if(f)
	{
			if(s[0]>='a' && s[0]<='z')
			{
				 	s[0]=s[0]-32;
				 
			}
     
     	
       else	 if(s[0]>='A' && s[0]<='Z')
        	{
     		   	s[0]=s[0]+32;
     		   
		   }
     	
		for(int i=1;i<s.length();i++)
      	{
	        s[i]=s[i]+32;

     	}
     
     	cout<<s;
	}
	else
	cout<<s;
}
