#include<bits/stdc++.h>
using namespace std;
char* func(char str[], char c,int n)
{
	string s="";
	int si=strlen(str);
	int k=si/2;
	for(int i=0;i<k;i++)
	s+=str[i];
	for(int i=1;i<=n;i++)
	{
		s+=c;
	}
	for(int i=k;i<si;i++)
	{
		s+=str[i];
	}        
    char* j;
    j=&s[0];
    return j;
}
int main()
{
	char str[]="abab";
	cout<<func(str,'d',5);
}
