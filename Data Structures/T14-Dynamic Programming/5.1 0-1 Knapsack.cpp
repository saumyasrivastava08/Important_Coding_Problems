#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000];

int knapsack(int weight[],int value[],int w,int n) {
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n+1;i++) {
        for(int j=0;j<w+1;j++) {
            if(i == 0 || j == 0) {
                dp[i][j] = 0;
            }
        }
    }
    for(int i=1;i<n+1;i++) {
        for(int j=1;j<w+1;j++) {
            if(weight[i-1] <= j) {
                dp[i][j] = max(value[i-1] + dp[i-1][j-weight[i-1]], dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    
    return dp[n][w]; 
    
}

int main() {
    // n = number of elements
    // w = maximum weight
    // weight array
    // value array
    int n,w;
    cin >> n >> w;
    int weight[n];
    int value[n];
    for(int i=0;i<n;i++) {
        cin >> weight[i] >> value[i];
    }
    cout << knapsack(weight,value,w,n) << endl;
    
}

/*
Test cases : 
n = 3 , w = 50
weight = [10,20,30]
value = [60,100,120]
output : 220
--------------------
n=4 , w  = 10
weight = [12, 13, 15, 19]
value = [10, 20, 30, 40]
output : 0

Link : https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/
*/