#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while(t--){
        long long  int  n,k;    
        cin>>n>>k;
	    long long int a[n];
	    long long  int f=0;
	    int maxi=INT_MAX;
	    for(int i=0;i<n;i++) cin >> a[i];
	 int c=0;
	 int flag = 0;
	 int count = 0;
	 while(k--){
	 	for(int i=0;i<n;i++){
	 		if( i!=n-1 && a[i]<a[i+1]){
	 		    count=i+1;
	 			a[i]+=1;
	 			break;
	 		}
	 		else if(i==n-1){
	 			flag=1;
	 			break;
	 		}
	 	}
	 	if(flag) break;
	 }
	 if(!flag) cout<<count<<endl;
	 else cout<<-1<<endl;
    }
}

// Link : https://codeforces.com/contest/1481/problem/B