//String is palindrome or not

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"Enter the String \n";
	cin>>s;
	int n= s.length();
	int l=0,h=n-1,f=1;
	while(l<h)
	{
		if(s[l]!=s[h])
		 f=0;
		 l++;
		 h--;
	}
	if(f)
	cout<<"Yes";
	else
	cout<<"No";
}

