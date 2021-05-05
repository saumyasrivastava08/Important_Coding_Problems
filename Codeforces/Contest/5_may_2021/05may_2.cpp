#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main()
{
	vector<int>v;
	for(int i=1;i<=9;i++)
	{
		v.push_back(i);
		int k=i;
		for(int j=1;j<=10;j++)
		{
			k=(k*10)+i;
			v.push_back(k);
		}
	}
	sort(v.begin(),v.end());
	/*for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";	
	cout<<"\n";*/
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n<10)
		cout<<n<<"\n";
		else
		{
			auto it=upper_bound(v.begin(),v.end(),n);
			cout<<it-v.begin()<<"\n";
		}
	}
}
