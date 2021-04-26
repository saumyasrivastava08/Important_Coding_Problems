#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		bool flag=true;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j)
				continue;
				int ans=a[i]*a[j];
				int aa=sqrt(ans);
				if(aa*aa!=ans)
				{
					flag=false;
					break;
				}
			}
		}
		if(!flag)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
