
//Sidnaaz forever
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)

#include<bits/stdc++.h>
using namespace std;
int check(vector<int> v){
    return is_sorted(v.begin(),v.end());
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
    cin>>a;
    ll k= 2*a;
       ll n=a;
       string s="";
     
          s="()";
          string p;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
              cout<<s;
            ll   m = n-i;
            for(int i=0;i<m;i++)
              cout<<"(";
            for(int i=0;i<m;i++)
              cout<<")";
              cout<<"\n";
        }

    

    }
    
 
  
}