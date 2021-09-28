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
            if(a[i]>10)
            {
                s = s + (a[i]-10);
            }
    }
     cout<<s; 
}

