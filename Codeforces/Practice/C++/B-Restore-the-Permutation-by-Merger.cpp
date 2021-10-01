//question-link: https://codeforces.com/contest/1385/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
void solve()
{
    int n;
    cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++)cin>>a[i];
    cout<<a[0]<<" ";
    for(int i=1;i<2*n;i++){
        if(find(a,a+i,a[i])!=a+i)continue;
        else{
            cout<<a[i]<<" ";
        }
    }
    cout<<"\n";
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--)
{
 solve();
}
return 0;
}
/* INPUT:
 5
2
1 1 2 2
4
1 3 1 4 3 4 2 2
5
1 2 1 2 3 4 3 5 4 5
3
1 2 3 1 2 3
4
2 3 2 4 1 3 4 1

OUTPUT:
1 2 
1 3 4 2 
1 2 3 4 5 
1 2 3 
2 3 4 1 
*/
