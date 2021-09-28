
//Sidnaaz forever
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	bsdk;
	ll t;
	cin>>t;
	while(t--)
	{
        ll n,x;
        cin>>n>>x;
        vector<ll>a(n);
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
             cin>>a[i];
             mp[a[i]]++;
        }
         ll c=0,c1=0;
        /* ll evenindex=0,evennos=0,oddindex=0,oddnos=0,one1=0,one2=0;
         for(ll i=0;i<n;i++)
         {
                if((i+1)%2==0)
                   evenindex++;
                else if((i+1)%2!=0)
                     oddindex++;
                if((a[i])%2==0)
                   evennos++;
                else if((a[i])%2!=0)
                     oddnos++;       

         }
        
           one1=min(evenindex,oddnos);
           one2 =min(oddindex,evennos);

         cout<<(one1+one2)<<"\n";*/
          if(x==0)
          {
              for(auto x:mp)
              {
                  c1 = max(c1, x.second);
              }
              cout<<c1<<" 0"<<"\n";
          }
          else
          {
              for(auto p:mp)
              {
                  ll k = (p.first^x);
                  if(mp.find(k)!=mp.end())
                   {
                       auto t = mp.find(k);
                       if((t->second+p.second)>c1)
                       {
                           c1 = (t->second+p.second);
                             c= p.second;
                       }
                       else if((t->second+p.second)==c1)
                        {
                               c= min(c,p.second);
                        }

                   }
                   if(p.second>c1)
                   {
                       c1=p.second;
                       c=0;
                   }
                   else if(p.second==c1)
                   {
                       c=0;
                   }
              }
              cout<<c1<<" "<<c<<"\n";
          }

    }
}


