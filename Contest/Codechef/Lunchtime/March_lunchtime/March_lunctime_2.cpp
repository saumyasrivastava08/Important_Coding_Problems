
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long  x,r,m; //60 4 5
		cin>>x>>r>>m;
		m=m*60;// 300
		
		long long r1= r*60;//180
		long long p= (r1-x); // 120  
	
	if(p<0)
	{
		 cout<<"YES"<<"\n";
	}
	
	else
	{
		long long oo = p+(r*60);  //180+120=300
	     
		if(oo<=m )
        cout<<"YES"<<"\n";
		else
		cout<<"NO"<<"\n";
	}
		
	}
}
