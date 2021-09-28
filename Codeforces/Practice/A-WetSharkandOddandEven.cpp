#define ll long long

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll s=0;
    for(ll i=0;i<n;i++)
    {
            cin>>a[i];
           
                s = s + (a[i]);
            
    }
    sort(a.begin(),a.end());
    if(s%2==0)
     cout<<s;
     else{
             for(auto x:a)
                {
                     
                     if((s-x)%2==0)
                      {
                          s = s-x;
                          break;
                      }
                }
     cout<<s; 
     }
   
}

