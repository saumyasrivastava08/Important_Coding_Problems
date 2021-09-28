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
         ll n,k,l;
         cin>>n>>k>>l;
         vector<ll>a(n);
         for(ll i=0;i<n;i++)
           cin>>a[i];
         ll f=a[n-1];
         ll mx= *max_element(a.begin(),a.end());
     //    cout<<mx<<"mmmmm  "<<f;
       if( mx > a[n-1])
         {
             ll c=0;
             if(k<=0)
             {
                    cout<<"No"<<"\n";
             }
             
           else{
               ll ffff=0;
                 while(mx>=f)
                 {
                     
                     f=f+k;
                    // cout<<f<<"  ";
                       c++;
                       if(c>=l)
                    {
                        ffff=1;
                     cout<<"No"<<"\n";
                     break;
                   }
                 
                 }
             if(f>mx && ffff==0)
              cout<<"Yes"<<"\n";
           }
             
         }
         else {

             ll ff=0;
             for(ll i=0;i<n;i++)
              {
                  if(mx==a[i])
                    {
                        if(i==(n-1))
                        {
                                 cout<<"Yes"<<"\n";
                                  break;
                        }
                        else
                        {
                             ff=1;
                             break;

                        }

                    }
                           

                 }
                          if(ff)
                           {
                           ll c=0;
                            if(k<=0)
                             {
                                  cout<<"No"<<"\n";
                                   //  break;
                               }
             
                         else{
                             ll ffff=0;
                                 while(mx>=f)
                                    {

                                        f=f+k;
                
                                         c++;
                                       if(c>=l)
                                       {
                                         cout<<"No"<<"\n";
                                         ffff=1;
                                           break;
                                       }
                 
                              }
                      if(f>mx && ffff==0)
                      {
                                 cout<<"Yes"<<"\n";
                                 //  break;
                      }
              }
         }
              }
       
          
         
    }
}


