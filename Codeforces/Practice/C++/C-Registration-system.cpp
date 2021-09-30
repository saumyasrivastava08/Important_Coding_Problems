// link: https://codeforces.com/contest/4/problem/C
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n;
    cin>>n;
    unordered_map<string,int>m;
    while(n--){
    string s;
    cin>>s;
    if(m.find(s)==m.end()||m.empty()){
        m[s]=1;
        cout<<"OK"<<"\n";
    }
    else{
        
         cout<<s<<m[s]<<endl;
         m[s]+=1;
    } 
    }
    return;
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
4
abacaba
acaba
abacaba
acab

OUTPUT:
OK
OK
abacaba1
OK

INPUT:
6
first
first
second
second
third
third

OUTPUT:
OK
first1
OK
second1
OK
third1
*/