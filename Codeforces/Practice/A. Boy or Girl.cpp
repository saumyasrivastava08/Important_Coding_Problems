#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	set<char>p;
	for(ll i=0;i<s.size();i++)
	{
		p.insert(s[i]);
	}
	if(p.size()%2==0)
	cout<<"CHAT WITH HER!";
	else
	cout<<"IGNORE HIM!";
}

