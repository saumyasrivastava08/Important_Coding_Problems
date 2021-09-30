#include<bits/stdc++.h>
#define ll long long
#define rep(i,t) for(ll i=0;i<t;i++)
using namespace std;
int sum(vector<ll> arr,int x,int s)
{
    ll size=arr.size();
    int l=s+1,r=size-1; 
    int ans=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]>x)
        r=mid-1;
        else if(arr[mid]<x)
        {
            l=mid+1;
            ans=mid;
        }
        else
        {
            return mid;
        }
    }
    return ans;
}
void solve1(){
    ll n;
    cin>>n;
    cout<<2<<endl;
    cout<<n<<" "<<(n-1)<<endl;
    int prev=round((2*n-1)/2.00);
    for(int i=n-2;i>0;i--)
    {
        cout<<i<<" "<<prev<<endl;
        prev=round((i+prev)/2.00);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    ll t;
    cin>>t;
    rep(i,t){
        solve1();
    }
    return 0;
}