
#include<bits/stdc++.h>
#define ll long long
#define bsdk  ios_base::sync_with_stdio(false)
#define mod 1000000007
using namespace std;

int main()
{
    
    bsdk;

     ll t;
     cin>>t;

     while(t--)
     {
          ll n;
          cin>>n;


          if(n==1) cout<<1<<endl;
          else if(n==2) cout<<-1<<"\n";
          else
          {
               int f = 1;
               ll kk = 1,pp = 2;
               for(ll i=0;i<n;i++)
               {
                    for(ll j=0;j<n;j++)
                    {
                         if(f) cout<<kk<<" ",kk+=2;
                         else cout<<pp<<" ",pp+=2;
                         if(kk>n*n) f = 0;
                    }
                    cout<<"\n";
               }
          }
     }
}
