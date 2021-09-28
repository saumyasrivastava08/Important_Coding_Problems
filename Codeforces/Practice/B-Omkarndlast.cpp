
//Sidnaaz forever
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
map<ll,ll>mp;
ll pairs(ll number)
{
    return((number*(number-1))/2);
}

void go(ll i, string b, ll sum=0)
{           //+-??
    if(i==b.length())
    {
        mp[sum]++;  //m[2]= 1 
        return;
    }
    if(b[i]=='?')
    {
        b[i]='+';
       
        go(i+1,b,sum+1);
        b[i]='-';
        go(i+1,b,sum-1);

    }
    else
    {
        go(i+1,b,sum+(b[i]=='+' ? 1 : -1));  //+- i=3 , b , 0   || +-+ go(3,b,1) || +-++ go(4,b,2) 
                                                                            
    }
}

int main()
{
	bsdk;
	ll t;
	cin>>t;
   
	while(t--)
	{
       ll n;
       cin>>n;
       vector<pair<ll,ll>>v;
       for(ll i=1 ;i*i<=n ;i++)
       {
           if(n%i==0)
           {
               if(i==n/i && (n-i)>0)
               {
                   v.push_back(make_pair(i,(n-i)));
               }
               else
               {
                   
                           if(n-i>0)
                            v.push_back(make_pair(i,(n-i)));  
                          if(n-(n/i)>0)
                         v.push_back(make_pair(n/i,(n-n/i)));
                   
                   
               }
           }
       }
       ll m = INT_MAX;
       vector<ll>ppp;
       for(auto x:v)
       {
           
         //  cout<<x.first<<"  "<<x.second<<endl;
           ll p = x.first * x.second ;
           p = p/(__gcd(x.first,x.second));
           if(p<m)
           {
                m = p;
                ppp.clear();
                ppp.push_back(x.first);
                 ppp.push_back(x.second);
           }
          
       }
      // cout<<m<<endl;
       cout<<ppp[0]<<" "<<ppp[1]<<endl;
    } 
        
    
}


