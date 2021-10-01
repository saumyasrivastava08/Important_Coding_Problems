/*
  Problem Statement:
Implement disjoint sets union data structure. You have to perform queries of two types:
•	union  u  v — unite two sets that contain  u and  v, respectively;
•	get  v — find the set to which  v belongs to, find the minimal and the maximal element of the set, and the total number of 
elements in it.
Input
The first line of the input contains two integers  n and  m (           1≤n,m≤3⋅105) — the number of elements and the number of 
queries. Next  m lines contain queries, one per line. For a query union the line looks like union  u  v (       1≤u,v≤n). For
a query get the line looks like get  v (     1≤v≤n).
Output
For each operation get you should output the result on a separate line in the respected order. Each result should consist of 
three integers: the minimal element, the maximal element and the number of elements in the set.

Example

input
5 11
union 1 2
get 3
get 2
union 2 3
get 2
union 1 3
get 5
union 4 5
get 5
union 4 1
get 5

output
3 3 1
1 2 2
1 3 3
5 5 1
4 5 2
1 5 5

*/
//My code
#include<bits/stdc++.h>
#define int long long int
#define pb push_back
#define pp pop_back
#define pii pair<int,int>
#define vec vector<int>
#define mp make_pair             // DISJOINT SET UNION(DSU)
#define inf 1e10
#define F first
#define S second
using namespace std;
int parent[300001],rak[300001],mn[300001],mx[300001],siz[300001];
void make_set(int v)     // making a new set
{
  parent[v]=v;
  siz[v]=1;
  mx[v]=v;
  mn[v]=v;
}
int find_set(int v)  // finding the leader of the set containing v
{
  if(parent[v]==v)
    return v;
  else
    return parent[v]=find_set(parent[v]);
}
void union_set(int u,int v)   // DOING UNION BY RANK
{
  u=find_set(u);  // finding leader of the set containing u
  v=find_set(v);  // finding leader of the set containing v
  if(u!=v)
  {
    if(siz[u]<siz[v])
        swap(u,v);
    parent[v]=u;
    siz[u]+=siz[v];
    mx[u]=max(mx[u],mx[v]);
    mn[u]=min(mn[u],mn[v]);
  }
}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt=1;
  //cin>>tt;
  while(tt--)
  {
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        make_set(i);
    for(int i=1;i<=m;i++)
    {
      string s;
      cin>>s;
      if(s=="union")
      {
        int a,b;
        cin>>a>>b;
        union_set(a,b);
      }
      else
      {
        int a;
        cin>>a;
        a=find_set(a);
        cout<<mn[a]<<" "<<mx[a]<<" "<<siz[a]<<"\n";
      }
    }
  }
}



