#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        string s;
        cin >> s;
        int u=0,d=0,l=0,r=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'R') r++;
            else if(s[i] == 'L') l++;
            else if(s[i] == 'U') u++;
            else if(s[i] == 'D') d++;
        }
        if(x >=0 && y >=0){
            if(x<= r && y <= u) cout<<"YES"<< endl;
            else cout <<"NO"<< endl;
        }else if(x >=0 && y < 0){
            if(r >= x && abs(y) <= d) cout <<"YES"<< endl;
            else cout<<"NO"<< endl;
        }else if(x < 0 && y>=0 ){
            if(abs(x) <= l && y <= u) cout<<"YES"<< endl;
            else cout<<"NO"<<endl;
        }else{
            if(abs(x) <= l && abs(y) <= d) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}

// Link :  https://codeforces.com/contest/1481/problem/A