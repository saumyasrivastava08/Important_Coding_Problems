#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		double k1,k2,k3,v;
		cin>>k1>>k2>>k3>>v;
		double p = k1*k2 , q=k3*v,res=p*q;
	//	cout<<p<<" "<<q<<" "<<res<<" ";
		//double res= p+q+r;
		double ans = 100.00/res;
		double ans1 = (int)(ans * 100 + .5);
           double pp=   ans1 / 100.0;
		
	//	cout<<pp;
	double kkk=9.58;
		if(pp<kkk)
		cout<<"Yes"<<endl;
		
		else
		cout<<"No"<<endl;
		
		
	}
	
	     
}
