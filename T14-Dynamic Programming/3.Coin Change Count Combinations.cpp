#include <iostream>
#include <string.h>
using namespace std;


int getCount(int coins[], int n, int sum)
{
    int dp[sum+1][n+1];
    
    for(int i=0;i<=n;i++)
    {
        dp[0][i]=1;
    }
    
    for(int j=0;j<=sum;j++)
    {
        dp[j][0]=0;
    }
    
    for(int i=1;i<=sum;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j] = dp[i][j-1];
            
            if(coins[j-1]<=i)
            dp[i][j]+=dp[i-coins[j-1]][j];
        }
    }
    
    return dp[sum][n];
    
}

int main() {
	int n;
	cin>>n;
	int coins[n];
	for(int i=0;i<n;i++)
	cin>>coins[i];
	int sum;
	cout<<"Sum Required"<<"\n";
	cin>>sum;

cout<<getCount(coins, n, sum);
	

}
