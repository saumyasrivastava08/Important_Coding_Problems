#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int dp[4005];
    for(int i=1;i<=4005;i++)
    dp[i]=-1e9;
    for(int i=1;i<=3;i++)
    {
        int a;
        cin>>a;
        for(int i=a;i<=n;i++)
        dp[i]=max(dp[i],dp[i-a]+1);
    }
    cout<<dp[n]<<endl;
}