
//Sidnaaz forever
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
ll pairs(ll number)
{
    return((number*(number-1))/2);
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
        ll s=0;
     vector<ll>res;
      for(ll i=2;i*i<=(n);i++)
      {
         if(n%i==0)
         {
              res.push_back(i);
//cout<<i<<"  ";
                 n=n/i;
                 s++;
             
         }
           if(s==2)
           {
              
                break;
           }
                
      }
    
    if(s<2|| res[0]==n || res[1]==n){
        cout<<"NO"<<"\n";
    }
     else{
         cout<<"YES"<<"\n";
           cout<<res[0]<<" "<<res[1]<<" "<<n;
         cout<<"\n";
     }
    
    
      
    }
        
    
}


