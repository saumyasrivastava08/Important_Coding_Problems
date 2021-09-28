#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
int ms (vector<ll>arr, ll n)
{
   // 6 10 3  0 4 2
   ll sum=0;
    ll k= *max_element(arr.begin(),arr.end());
    if(k<=0) 
    {
        return 0;
    }
    
   for(ll i=0;i<n;i++)
       {
           if(arr[i]>0)
             {
                 sum += arr[i];
             }
       }
    return sum;
     
}
 
int main()
{
	bsdk;
	ll t=1;
	//cin>>t;
	while(t--)
	{
       ll n;
       cin>>n;
       vector<ll>arr(n);
       for(ll i=0;i<n;i++)
       {
           cin>>arr[i];
       }
      /* for(ll i=0;i<p.size();i++)
       {
           if(j==0)
           break;
           pp.push_back(p[i]); 
           j--;
           
       }
      
       for(ll i=0;i<pp.size();i++)
       {
           for(ll j=0;j<a.size();j++)
           {
                     if(a[j]<0  && pp[i]==abs(a[j]))
                      {
                            a[j]=pp[i];
                      }
           }
           
       }
     
      ll fi2= 0;
      fi2= ms(a,n);
      cout<<max(fi,fi2)<<"\n";*/
        string s="";
        for(ll i=0;i<n;i++)
        {
            if((i%2)==0)
            {
                ll p=arr[i];
                while(p--)
                {
                    s=s+'(';
                }
            }
            else
            {
                 ll p=arr[i];
                while(p--)
                {
                    s=s+')';
                }
            }
        }
        
        cout<<s;
	}
}


