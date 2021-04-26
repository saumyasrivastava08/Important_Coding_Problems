#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	vector<int>arr;
	ll a;
	ll c1=0,c2=0,c3=0,c4=0;
	for(int i=0;i<t;i++)
	{
		cin>>a;
		arr.push_back(a);
		if(a==1)
		c1++;
		else if(a==2)
		c2++;
		else if(a==3)
		c3++;
		else
		c4++;
		
	}
ll pt= c4;
while(c1!=0 && c3!=0)
{
	c1--;
	c3--;
	pt = pt +1;
}
if(c1==0 && c3!=0)
{
	pt = pt +c3;
	c3=0;
}
pt = pt + (c2/2);
     if(c2%2!=0)
     {
     	if(c1<=2)
     	{
     		pt = pt + 1;
     		c2=0;
     		c1=0;
		 }
		 else
		 {
		 	c1 = c1 - 2;
		 	pt = pt + 1;
		 	c2 =0;
		 }
	 }
	 if(c1 != 0)
	 {
	 	pt = pt + (c1/4) ;
	 	if(c1%4!=0)
	 	{
	 		pt = pt + 1;
		 }
	 }
 cout<< pt ;

}
