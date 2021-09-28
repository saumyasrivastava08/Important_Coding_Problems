
//Sidnaaz forever
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<int>a(n);
    for(ll i=0;i<n;i++)
       cin>>a[i];
    ll mx= *max_element(a.begin(),a.end());
    ll mi = *min_element(a.begin(),a.end());
    ll mxx=0,mii=0;
    for(auto x:a)
    {
        if(mx==x)
          mxx++;
        if(mi==x)
          mii++;  
    }  
  if(mx==mi)
   cout<<0<<" "<<(n*(n-1))/2;
   else
    cout<<(mx-mi)<<" "<<(mxx*mii);
}