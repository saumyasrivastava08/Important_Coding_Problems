
#include<bits/stdc++.h>
#define ll long long
#define bsdk  ios_base::sync_with_stdio(false)
#define mod 1000000007
using namespace std;

int main()
{
    
    bsdk;
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll c=0,f=0;
    for(auto x:s)
    {
    	if(x=='(')
    	 c++;
    	 else 
    	 {
    	 	c--;
    	 	if(c<0)
    	 	f++;
		 }
    	 
    	   
	}
	if(c==0)
	cout<<f*2<<endl;
	else
	cout<<-1<<endl;
}
