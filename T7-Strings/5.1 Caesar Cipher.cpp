//check if string is anagram or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	int k;
	cin>>s1>>k;
	int n = s1.length();

	for(int i=0;i<n;i++)
	{
		s1[i]=((int)s1[i]+k);
	}
   cout<<s1;

	
	
}
