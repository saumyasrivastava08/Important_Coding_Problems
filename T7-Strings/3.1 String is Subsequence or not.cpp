//if string is of length n no of subsequences will 2powern;
//String is palindrome or not
//iterative is better
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,s1;
	cin>>s1>>s;
	int n= s.length(), m=s1.length();
	int l=0,h=0,f=1;
	while(h<n && l<m)
	{
		if(s1[l]==s[h])
		{
			l++;
			h++;
		}
	   else
	    l++;
	}
	if(h==(n))
	cout<<"Yes";
	else
	cout<<"No";
}

