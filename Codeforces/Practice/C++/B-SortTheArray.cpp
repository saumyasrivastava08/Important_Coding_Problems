
//Sidnaaz forever
#define ll long long
#define bsdk std::ios::sync_with_stdio(false)

#include<bits/stdc++.h>
using namespace std;
int check(vector<int> v){
    return is_sorted(v.begin(),v.end());
}
int main()
{
    ll n;
    cin>>n;
    vector<int>a(n);
    for(ll i=0;i<n;i++)
       cin>>a[i];
   vector<int>p;
   ll start=0,end=0,f=0;
    for(ll i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
           
            if(f==0)
            {
               
                   start=i;
                   f=1;
            }
           
            end=i+1;
        }  // 1 2 8 6 5 11 10
        else if(a[i]<=a[i+1] && (f==0))
        {
             
              continue;
        }
        else
        {
            
            break;
        }
    }
  //  reverse(a.begin()+start,a.begin()+end);
   ll initial=start,ending=end;
    ll temp=0;
   while(start<end)
   {
            temp= a[start];
            a[start]=a[end];
            a[end]=temp;
            start++;
            end--;

   }
     
  
     if(check(a))
     {
         cout<<"yes"<<"\n";
         cout<<initial+1<<" "<<ending+1<<"\n";

       
     }
     else if(!check(a))
      cout<<"no"<<"\n";
  
}