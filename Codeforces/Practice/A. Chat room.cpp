#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string ss = "hello";
	int j=0,f=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==ss[j])
		{
			j++;
		}
		if(j==5)
		{
			f=1;
			break;
		
			
		
		}
	}
	if(f)
		cout<<"YES";
		else
	cout<<"NO";
}
