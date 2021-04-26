#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	cin.ignore();

	if(s[0]>='a' && s[0]<='z')
	  s[0]=s[0]-32;
  cout<<s[0];
	 for(int i=1;i<s.length();i++)
	 {
	 		if(s[i]>='A' && s[i]<='Z')
	 		s[i]=s[i]+32;
	 		else
	 		s[i]=s[i];
	 }
	 cout<<s;
 }
