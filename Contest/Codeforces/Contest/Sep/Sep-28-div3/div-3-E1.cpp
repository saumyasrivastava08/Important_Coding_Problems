
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
       ll n;
       cin>>n;
       vector<ll>a(n);
    
       for(ll i=0;i<n;i++)
          cin>>a[i];
     
      deque<ll>q;
      q.push_back(a[0]);
      for(ll i=1;i<n;i++)
      {
          if(a[i]<q.front())
            q.push_front(a[i]);
           else
           q.push_back(a[i]); 
      }
        for(auto x:q)
      {
           cout<<x<<" ";
      } 
      cout<<"\n";
    }
}




/// 2 4 5 1 3
 // 1 4
 //1 2 4 5 3
 // 1 2 3 4 5
 