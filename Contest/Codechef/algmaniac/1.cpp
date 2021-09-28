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
        ll a,b,c;
        cin>>a>>b>>c;
        ll d,e,f;
        cin>>d>>e>>f;
        ll one1=0,zero1=0;
        if(a==1)
          one1++;
        if(b==1)
           one1++;
        if(c==1)
        one1++;
         if(a==0)
          zero1++;
        if(b==0)
           zero1++;
        if(c==0)
        zero1++;
          ll one2=0,zero2=0;
        if(d==1)
          one2++;
        if(e==1)
           one2++;
        if(f==1)
        one2++;
         if(d==0)
          zero2++;
        if(e==0)
           zero2++;
        if(f==0)
        zero2++;
       // cout<<one1<<" "<<one2<<"nn"<<zero1<<" "<<zero2;
        if(one1==one2 && zero1==zero2)
        cout<<"Pass"<<"\n";
        else
        cout<<"Fail"<<"\n";

    }
}


