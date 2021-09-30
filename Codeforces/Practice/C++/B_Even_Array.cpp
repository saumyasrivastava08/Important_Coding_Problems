#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n;
    cin>>n;
    int a[n],e=0,o=0,c=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
       if(!(a[i]&1)){
            e++;
       }
       else o++;
       if(i%2!=a[i]%2)c++;
    }
    if(!(n&1)){
        if(e==(n/2) && o==(n/2)) cout<<(c/2)<<"\n";
        else cout<<"-1"<<"\n";
    }
    else{
        if(e==((n/2) + 1) )cout<<(c/2)<<"\n";
        else cout<<"-1"<<"\n";
    }
    return;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--)
{
 solve();
}
return 0;
}