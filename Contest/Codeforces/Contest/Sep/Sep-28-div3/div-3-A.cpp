
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
       string s;
         cin>>s;
       ll a=0,b=0,c=0;
       for(auto x:s)
       {
                 if(x=='A')
                  a++;
                else if(x=='B')
                 b++;
                 else if(x=='C')
                     c++;          
       }
      if(b==a+c && s.length()%2==0 )
      cout<<"YES"<<"\n";
      else
       cout<<"NO"<<"\n";
    }
}




/// 2 4 5 1 3
 // 1 4
 //1 2 4 5 3
 // 1 2 3 4 5
 