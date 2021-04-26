#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string ss;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'||s[i]=='y')
		{
			continue;
		}
		else
		{
			ss.push_back('.');
			if(s[i]>='A' && s[i]<='Z')
			{
				ss.push_back(s[i]+32);
			}
			else
			ss.push_back(s[i]);
		}
	}
	cout<<ss;
}
