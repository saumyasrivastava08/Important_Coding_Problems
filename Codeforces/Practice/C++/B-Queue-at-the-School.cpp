//link: https://codeforces.com/contest/266/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n,time;
    cin>>n>>time;
    string s;
    cin>>s;
    for(int i=1;i<=time;i++)
    {
        for(int i=0;i<s.size()-1;)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
            swap(s[i],s[i+1]);
            i+=2;
            }
            else i++;
            //cout<<i<<" ";
        }
        //cout<<s<<"\n";
    }
    cout<<s<<"\n";
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
/*INPUT:
5 1
BGGBG
OUTPUT:
GBGGB

INPUT:
5 2
BGGBG
OUTPUT:
GGBGB
*/