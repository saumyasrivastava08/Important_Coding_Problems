#define ll long long

#include<bits/stdc++.h>
using namespace std;

int main()
{
   ll t;
   cin>>t;
    unordered_map<string,ll>mp;
   while(t--)
   {
       string s;
       cin>>s;
      
      
       
        if(mp.find(s)==mp.end())
        {
            cout<<"OK"<<"\n";
        }
        else {
             ll ss= mp.find(s)->second;
                cout<<s<<ss<<"\n";
        }
       mp[s]++;

   }


   
}

