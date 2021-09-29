
//Sidnaaz forever
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	      bsdk;
        ll n,m;
        cin>>n>>m;
           ll c=0;
            while(n!=m)
            {
               if(m>n)
               {
                   if(m%2==0)
                {
                      m = m / 2;
                     
                      c++;
                } 
                  
                //cout<<c<<"\n";
            
                  else if(m%2!=0)
                    {
                        m++;
                       c++;

                    }
               }
               else{
                   m++;
                   c++;
               }
                
           }
            cout<<c<<"\n";
        
    
}


