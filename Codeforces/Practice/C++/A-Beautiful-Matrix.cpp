//link to the question: https://codeforces.com/contest/263/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
void solve()
{
    int t[5][5],x,y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>t[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(t[i][j]==1){
                x=i;
                y=j;
            }
        }
    }
    cout<<abs(x-2)+abs(y-2)<<"\n";
 
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
solve();
return 0;
}
// TEST CASE
/* INPUT :
 0 0 0 0 0
 0 0 0 0 1
 0 0 0 0 0
 0 0 0 0 0
 0 0 0 0 0

 OUTPUT:
 3 
 
 INPUT:
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
 
 OUTPUT:
 1
 */

