//link: codeforces.com/https://codeforces.com/contest/233/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n;
    cin>>n;
    if(n&1){
        cout<<"-1"<<"\n";
        return ;
    }
    int a[n];
    for(int i=0;i<n;i+=2){
        a[i]=(i+2);
        a[i+1] = (i+1);
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    return ;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
solve();
return 0;
}
/* INPUT:
1
OUTPUT:
-1
INPUT:
2
OUTPUT:
2 1
INPUT:
7
OUTPUT:
-1
*/