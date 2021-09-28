
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
       
        /*ll a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if(a>e && b>e && c>e)
            {
                cout<<"No"<<"\n";
            }
        else
        {
            ll s1=0,s2=0,s3=0;
            s1=a+b;
            s2=b+c;
            s3=a+c;
            if(s1<=d && c<=e || s2<=d && a<=e || s3<=d && b<=e )
              cout<<"Yes"<<"\n";
            else 
               cout<<"No"<<"\n";
           
        }
            */
          vector<ll>o(n);
          vector<ll>e(n);
          for(ll i=0;i<n;i++)
            cin>>o[i];
          for(ll i=0;i<n;i++)
            cin>>e[i];
        ll c=0;
        for(ll i=0;i<n;i++)
        {
            if(o[i]<e[0])
             {
                 c= c+i;
                 break;
             }
             
        }
         cout<<c<<endl;  
           
    }
}


