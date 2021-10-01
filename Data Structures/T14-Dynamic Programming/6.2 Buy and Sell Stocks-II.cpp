#include <bits/stdc++.h>
using namespace std;

int maxProfit(const vector<int> &A) {
    if(!A.size())
        return 0;
    
    int ans=0, mini=A[0], maxi=A[0];
    for(int i=1;i<A.size();i++){
        if(A[i]>A[i-1]){
            maxi=A[i];
        }
        else{
            ans+=(maxi-mini);
            maxi=A[i];
            mini=A[i];
        }
    }
    ans+=(maxi-mini);
    return max(0, ans);
}

int main(){
	int n;
	cin>>n;
	
    vector<int> A(n);
	for(int i=0;i<n;i++)
		cin>>A[i];
	
    cout<<"Maximum profit: "<<maxProfit(A, 0, n-1, dp);

    return 0;
}
