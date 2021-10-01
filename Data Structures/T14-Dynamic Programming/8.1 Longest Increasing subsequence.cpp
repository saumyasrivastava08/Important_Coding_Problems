/*Find the length of longest increasing subsequence of a given array of integers, A.

Test cases:
Input 1:
    A = [1, 2, 1, 5]

Output 1:
    3
    
Explanation 1:
    The sequence : [1, 2, 5]

Input 2:
    A = [0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15]
    
Output 2:
    6
*/

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