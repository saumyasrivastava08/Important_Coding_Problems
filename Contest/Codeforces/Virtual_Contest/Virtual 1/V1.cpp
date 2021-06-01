
#include<bits/stdc++.h>
#define ll long long
#define bsdk  ios_base::sync_with_stdio(false)
#define mod 1000000007
using namespace std;

int main()
{
    
    bsdk;
ll t;
cin>>t;
while(t--)
         {
         	ll p,a,b,c ;
         	cin>>p>>a>>b>>c;
         
         	if(p%a == 0 || p%b== 0  || p%c== 0  )
         	cout<<0<<"\n";
         	else
         	{
         	   ll k = a - (p%a);
         	   ll l = b - (p%b);
         	   ll m = c - (p%c);
         	   ll mi = min(k,l);
         	   mi= min(mi,m);
         	   
			   	cout<<mi<<"\n";
			}
		 }
			
     
}
