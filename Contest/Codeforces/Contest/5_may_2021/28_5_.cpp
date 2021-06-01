
#include<bits/stdc++.h>
#define ll long long
#define bsdk  ios_base::sync_with_stdio(false)
#define mod 1000000007
using namespace std;

int main()
{
    
    bsdk;

    int n,k;
    cin>>n;
    
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    
    int ans=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+a[i]>0)
        {
            ans++;
            sum+=a[i];
        }
    }
    if(sum+a[n-1]==0)
        ans++;
    cout<<ans<<"\n";;
         
			
     
}
