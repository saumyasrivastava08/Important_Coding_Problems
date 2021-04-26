#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<int>v;
	for(int i=0;i<s.length();i++)
	{
		if(i%2==0)
		{
			int a = s[i]-'0';
			v.push_back(a);
		}
	}
	sort(v.begin(),v.end());
	int n=v.size();

	for(int i=0;i<n-1;i++)
	{
		cout<<v[i]<<"+";
	}
	cout<<v[n-1];
}
