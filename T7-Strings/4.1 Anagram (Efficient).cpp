//check if string is anagram or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int n = s1.length(), m = s2.length();
	int c[256]={0};
	if(n!=m)
	{
		cout<<"Not Anagram \n";
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			c[s1[i]]++;
			c[s2[i]]--;
		}
	}
	int f=1;
	for(int i=0;i<256;i++)
	{
		if(c[i]!=0)
		{
			f=0;
			break;
		}
	}
	if(f)
	cout<<"Anagram \n";
	else
	cout<<"Not Anagram \n";

	
	
}
