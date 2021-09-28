
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
        string s;
        cin>>s;
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
            ll sum=0;
        
                      ll nonzero=0;
                   for(auto x:s)
                    {
                          
                            sum = sum + (x-'0');
                            if(x!='0')
                              nonzero++;

                    }

                    if(s[n-1]!='0')
                       cout<<sum+nonzero-1<<"\n";
                     else
                       cout<<sum+nonzero<<"\n";
            
           
           
    }
}


