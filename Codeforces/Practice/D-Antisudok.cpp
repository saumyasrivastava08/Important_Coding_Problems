
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
  //  ll k=1;
	while(t--)
	{
      
       string s[9];
       for(int i=0;i<9;i++)
       {
            cin>>s[i];
           for(int j=0;j<9;j++)
           {
                  if(s[i][j]=='5')
                  s[i][j]='6'; 
                  
           }
               cout<<s[i];
               cout<<"\n";
          // v.push_back(res);
       }
      
       /* for(ll i=0;i<9;i++)
       {
          
           for(ll j=0;j<9;j++)
           {
                cout<<v[i][j];
           }
           
           
       }*/
    }
}


