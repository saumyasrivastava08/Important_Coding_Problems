
//Sidnaaz forever
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
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
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
         cin>>a[i];
         ll evenindex=0,evennos=0,oddindex=0,oddnos=0,one1=0,one2=0;
         for(ll i=0;i<n;i++)
         {
                if((i+1)%2==0)
                   evenindex++;
                else if((i+1)%2!=0)
                     oddindex++;
                if((a[i])%2==0)
                   evennos++;
                else if((a[i])%2!=0)
                     oddnos++;       

         }
        
           one1=min(evenindex,oddnos);
           one2 =min(oddindex,evennos);

         cout<<(one1+one2)<<"\n";
    }
}


