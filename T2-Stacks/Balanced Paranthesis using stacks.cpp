#include <bits/stdc++.h>
using namespace std;
bool matching(char a, char b)
{
	return((a=='('&& b==')')||(a=='{'&& b=='}')||(a=='['&& b==']'));
}
bool balanced(string s)
{
	stack <int> p;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='('||s[i]=='['||s[i]=='{')
		     p.push(s[i]);
		else{
		     	if(p.empty()==true)
		     	 return false;
		     	  else if(matching(p.top(),s[i])==false)
		     	    return false;
		     	   else
		     	   p.pop();
			}
	}
  return(p.empty()==true);
	 //cout<<" Balanced Paranthesis"<<" ";
}
int main()
{
	string str;
	cin>>str;
	if (balanced(str)) 
        cout << "Balanced"; 
    else
        cout << "Not Balanced"; 
	 
}
