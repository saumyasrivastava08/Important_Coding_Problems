/*
Given an expression, A, with operands and operators (OR , AND , XOR), in how many ways we can evaluate the expression to true, by grouping in different ways?
Operands are only true and false.

Return the number of ways to evaluate the expression modulo 10^3 + 3.
*/
#include <bits/stdc++.h>
using namespace std;

#define mod 1003
 
vector<vector<vector<int>>> dp;
 
int solve(string s, int i, int j, int isTrue){
    if(i>j)
        return 0;
    if(i==j){
        if(isTrue)
            return dp[i][j][isTrue] = (s[i]=='T')?1:0;
        else
            return dp[i][j][isTrue] = (s[i]=='F')?1:0;
    }
    
    if(dp[i][j][isTrue]!=-1)
        return dp[i][j][isTrue];
    
    long long ans=0;
    
    for(int k=i+1;k<=j-1;k+=2){
        
        int lt, lf, rt, rf;
        
        lt=solve(s,i,k-1,1);
        lf=solve(s,i,k-1,0);
        rt=solve(s,k+1,j,1);
        rf=solve(s,k+1,j,0);
        
        if(s[k]=='&'){
            if(isTrue)
                ans=(ans+(lt*rt)%mod)%mod;
            else
                ans=(ans+(lt*rf)%mod+(lf*rt)%mod+(lf*rf)%mod)%mod;
        }
        else if(s[k]=='|'){
            if(isTrue)
                ans=(ans+(lt*rf)%mod+(lf*rt)%mod+(lt*rt)%mod)%mod;
            else
                ans=(ans+(lf*rf)%mod)%mod;
        }
        else if(s[k]=='^'){
            if(isTrue)
                ans=(ans+(lf*rt)%mod+(lt*rf)%mod)%mod;
            else
                ans=(ans+(lt*rt)%mod+(lf*rf)%mod)%mod;
        }
    }
    return dp[i][j][isTrue]=ans%mod;
}
 
int main() {
	string A;
	cin>>A;
	
    dp=vector<vector<vector<int>>>(A.size()+1, vector<vector<int>>(A.size()+1, vector<int>(2, -1)));
    cout<<solve(A, 0, A.length()-1, 1);
	
	return 0;
}
