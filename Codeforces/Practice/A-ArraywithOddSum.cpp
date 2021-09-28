#define ll long long

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll s=0,od=0,ev=0;
    for(ll i=0;i<n;i++)
    {
            cin>>a[i];
           if(a[i]%2!=0)
             od++;
           if(a[i]%2==0)
             ev++;  
                s = s + (a[i]);
            
    }
   
    if(s%2==0)
    {
           if(od==0 || ev==0)
           cout<<"NO"<<"\n";
           else
           {
                cout<<"YES"<<"\n"; 
           }
    }
    
     else{
            
     cout<<"YES"<<"\n"; 
     }
    }
   
}

