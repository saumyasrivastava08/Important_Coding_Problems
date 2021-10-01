#include <bits/stdc++.h>
using namespace std;

int maxProfit(const vector<int> &A) {
    if(A.size()<2)
        return 0;
    int mini=A[0], maxi=A[0];
    int profit=INT_MIN;
    for(int i=1;i<A.size();i++){
        if(A[i]>maxi){
            maxi=A[i];
        } else if(A[i]<mini){
            profit=max(profit, maxi-mini);
            mini=A[i];
            maxi=A[i];
        }
    }
    profit=max(profit, maxi-mini);
    return profit;
}

int main(){
	int n;
	cin>>n;
	
    vector<int> A(n);
	for(int i=0;i<n;i++)
		cin>>A[i];
	
    cout<<"Maximum possible profit: "<<maxProfit(A, 0, n-1, dp);

    return 0;
}