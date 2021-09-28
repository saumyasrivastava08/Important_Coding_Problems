
//Sidnaaz forever
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;

ll basefind(ll num , ll b)
{
    ll c=0;
    while(num>0)
    {
        c = c + (num%b);
        num = num/b;
    }
     return c;
}
int main()
{
	bsdk;
	ll t;
	cin>>t;
	while(t--)
	{
        ll k , l ,r;
        cin>>k>>l>>r;
        
         if(k>=l && k<=r)
         {
             
         }
         ll minimum=999999999;
         ll ans=0;
         
         while(l<=r)
         {   
           
            ll mi =  basefind(k,l);
          //  cout<<"base of 216 is "<<mi<<" ";
            if(mi<minimum)
            {
                minimum=mi;
                ans = l;
            }
            l++;
         }
          cout<<ans<<"\n";
    }
}


