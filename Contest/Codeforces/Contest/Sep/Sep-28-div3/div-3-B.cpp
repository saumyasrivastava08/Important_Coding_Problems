
//Sidnaaz forever
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)
#include<bits/stdc++.h>
using namespace std;
ll getind(vector<ll>a , ll  start ,  ll num)
{
    ll end = a.size();
    for(ll i=start ;i<end;i++)
    {
        if(a[i]==num)
           return i;
    }
    return 0;
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
       vector<ll>b(n);
       for(ll i=0;i<n;i++)
       {
         cin>>a[i];
           b[i]=a[i];  
       }
         sort(b.begin(),b.end());
        vector<vector<ll>>v;

        for(ll i=0;i<n-1;i++)
        {
            if(a[i]==b[i])
                continue;
           ll d =    getind(a,i,b[i]);
         //  cout<<"index is at  "<<d<<endl;
           for(ll j= d ; j>i ;j--)
           {
               a[j]=a[j-1];
           }
           a[i]=b[i];
           vector<ll>final;
           final.push_back(i+1);
           final.push_back(d+1);
          final.push_back(d-i);

           v.push_back(final);
        }
       
          cout<<v.size()<<"\n";
        for(ll i=0;i<v.size();i++)
        {
            for(ll j=0;j<3;j++)
            {
                cout<<v[i][j]<<" ";
            }
              cout<<"\n";
        }
    //  cout<<"\n";
        
    }
}




/// 2 4 5 1 3
 // 1 4
 //1 2 4 5 3
 // 1 2 3 4 5
 