//print frequency of alphabet

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int c[26]={0};
	for(int i=0;i<s.size();i++)
	{
		c[s[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(c[i]>0)
		{
				cout<< (char)(i+'a')<<" "<<c[i]<<endl;
			
		}
	
	}
}
