
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
	ll t=1;
//	cin>>t;
   
	while(t--)
	{
       string a,b;
       cin>>a>>b;
       ll c=0;
       for(auto x:a)
       {
           if(x=='+')
            c++;
           else
            c--; 
       }
       go(0,b);
       ll ss=0;
       for(auto x:mp)
       {
           ss= ss+x.second;
       }
       cout<<fixed<<setprecision(12)<<mp[c]/(1.0*ss);
       
    } 
        
    
}


