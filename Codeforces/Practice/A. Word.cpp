#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	cin.ignore();
	int c1=0,c2=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='a' && s[i]<='z')
		 c1++;
		 else if(s[i]>='A' && s[i]<='Z')
		 c2++;
	}
		for(int i=0;i<s.length();i++)
		{
			if(c1>=c2)
			{
				if(s[i]>='A' && s[i]<='Z')
				    s[i]=s[i]+32;
				    else
				    s[i]=s[i];
			}
			else
			{
				if(s[i]>='a' && s[i]<='z')
				    s[i]=s[i]-32;
				    else
				     s[i]=s[i];
			}
		}
		cout<<s;
		
}
