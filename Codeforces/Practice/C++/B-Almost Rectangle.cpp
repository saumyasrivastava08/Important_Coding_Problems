#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    char a[n][n];
	    int f = 0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin >> a[i][j];
	        }
	    }
	    vector<int> v;
	    int r1,c1,r2,c2;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(a[i][j] == '*'){
	                v.push_back(i);
	                v.push_back(j);
	            }
	            
	        }
	    }
	   r1 = v[0];
	   r2 = v[2];
	   c1 = v[1];
	   c2 = v[3];
	   //cout << r1 << c1 << endl;
	   //cout << r2 <<  c2 << endl;
	   
	   
	   if(r1==r2){
          for(int i=0;i<n;i++){
               for(int j=0;j<n;j++){
                    if(r1!=0){
                         a[r1-1][c1]='*';
                         a[r2-1][c2]='*';
                    }
                    else{
                         a[r1+1][c1]='*';
                         a[r2+1][c2]='*';    
                    }
               }
          }
     }
     else if(c1==c2){
          for(int i=0;i<n;i++){
               for(int j=0;j<n;j++){
                    if(c1!=0){
                         a[r1][c1-1]='*';
                         a[r2][c2-1]='*';
                    }
                    else{
                         a[r1][c1+1]='*';
                         a[r2][c2+1]='*';    
                    }
               }
          }    
     }
     else{
          for(int i=0;i<n;i++){
               for(int j=0;j<n;j++){
                    if(i==r1 && j==c2){
                         a[i][j]='*';
                    }
                    if(i==r2 && j==c1){
                         a[i][j]='*';
                    }
               }

          }
     }
     for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
               cout<<a[i][j];
          }
          cout<<endl;
     }
	}
	return 0;
}

// Link : https://codeforces.com/contest/1512/problem/B