/*Find the length of longest increasing subsequence of a given array of integers, A.*/

#include <bits/stdc++.h>
using namespace std;

int lis(const vector<int> &A) {
    int n=A.size();
    vector<int> dp(n+1);
    
    int ans=0;
    for(int i=1;i<=n;i++){
        dp[i]=1;
        for(int j=1;j<i;j++){
            if(A[i-1]>A[j-1])
                dp[i]=max(dp[i], dp[j]+1);
        }
        ans=max(ans, dp[i]);
    }
    return ans;
}


int main(){
	int n;
	cin>>n;
	
    vector<int> A(n);
	for(int i=0;i<n;i++)
		cin>>A[i];
	
    cout<<"Length of longest increasing subsequence is: "<<lis(A);

    return 0;
}