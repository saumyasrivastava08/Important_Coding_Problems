
#include<bits/stdc++.h>
#define ll long long
#define bsdk  ios_base::sync_with_stdio(false)
#define mod 1000000007
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll height=0;
    ll energy=0;
    ll dollar=0;
    for(ll i=1;i<=n;i++)
    cin>>a[i];
    height=a[1];
    dollar=height;
   
    for(ll i=1;i<=n;i++)
    {
        if(i<n)
        energy=energy+(a[i]-a[i+1]);
        //cout<<"energy is"<<energy<<endl;
        if(energy<0)
        {
            dollar=dollar+abs(energy);
            //cout<<"dollar is"<<dollar<<"i is"<<i<<endl;
            a[i]=a[i]+abs(energy);
            energy=0;
        }
        
    }
    cout<<dollar<<endl;
    
}
