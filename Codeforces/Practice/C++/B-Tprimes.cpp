#define ll long long

#include<bits/stdc++.h>
using namespace std;
const ll  n = 10e6+5;
bool prime[n + 1];
void Sieve()
{
    
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
           
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
 
}
int main()
{
   ll t=1;
  // cin>>t;
  Sieve();
   while(t--)
   {
       ll nn;
       cin>>nn;
       vector<ll>a(nn);
       prime[1]=0;
       for(ll i=0;i<nn;i++)
       {
                  cin>>a[i];
                  ll sq= sqrt(a[i]),ff=0;
                  if((sq*sq)==a[i])
                  {
                         if(prime[sq])
                         {
                             ff=1;

                         }
                  }
                  if(ff)
                  cout<<"YES"<<"\n";
                  else
                  cout<<"NO"<<"\n";

       }
        

   }


   
}

