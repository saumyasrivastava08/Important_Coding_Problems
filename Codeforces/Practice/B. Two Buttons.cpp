
//Sidnaaz forever
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	bsdk;
	ll t=1;
//	cin>>t;
	while(t--)
	{
        ll n,m;
        cin>>n>>m;
        if(n==m)
         cout<<0<<"\n";
        else if(n>m)
        {
            cout<<(n-m)<<"\n";
        } 
        else
        {
            if(m%2==0)
            {
                ll c=0;
                while(n<=m)
                {
                      m = m / 2;
                      c++;
                }
                c = c + (n-m);
                cout<<c<<"\n";
            }
            else if(m%2!=0)
            {
                ll b= m + 1,c=0;
                while(n<=m)
                {
                   b=b/2;
                   c++;   
                
                }
                c = c + (n-b+1);
               cout<<c<<"\n";
            }
        }
    }
}


