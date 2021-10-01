/*
  Problem Statement:
In a novel online game, the players fight the monsters and get the experience, as usual. To fight monsters players join 
together in raid teams. After the destruction of the monster, all the players of the team get the same amount of experience 
points. The special feature of the game is that a team cannot be split up and no one can leave a team. The only supported 
operation is to join two teams together.

Since there are already a lot of people playing the game, you are asked to maintain the experience points of the players.

Input
The first line of the input contains two integers n and m (1 ≤ n, m ≤ 2·105) — the number of players and the number of queries.
Next m lines contain the description of queries, one per line. A query can be of three types:
•	join X Y — join two teams to which players X and Y belong to (if they are already in the same team, nothing changes).
•	add X V — add V (1 ≤ V ≤ 100) experience points to each player in a team to which player X belongs to.
•	get X — output the current number of experience points of player X.
Initially, each player has 0 experience points and each of the player is in its own team of size one.

Output
For each query get X output the current number of experience points of player X on a separate line.

Example

input
3 6
add 1 100
join 1 3
add 1 50
get 1
get 2
get 3

output
150
0
50

*/
// My code

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
int parent[300001],rak[300001],add[300001];
void make_set(int v)     // making a new set
{
  parent[v]=v;
  rak[v]=0;
}
int find_set(int v)  // finding the leader of the set containing v
{
  if(parent[v]==v)
    return v;
  else
    return find_set(parent[v]);
}
int get(int v)
{
  if(v==parent[v])
        return add[v];
  return add[v]+get(parent[v]);
}
void union_set(int u,int v)   // DOING UNION BY RANK
{
  u=find_set(u);  // finding leader of the set containing u
  v=find_set(v);  // finding leader of the set containing v
  if(u!=v)
  {
    if(rak[u]<rak[v])
        swap(u,v);
    parent[v]=u;
    add[v]-=add[u];
    if(rak[u]==rak[v])
        rak[u]++;
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
      if(s=="add")
      {
        int a,b;
        cin>>a>>b;
        a=find_set(a);
        add[a]+=b;
      }
      else if(s=="join")
      {
        int a,b;
        cin>>a>>b;
        union_set(a,b);
      }
      else
      {
        int x;
        cin>>x;
        cout<<get(x)<<"\n";
      }
    }
  }
}
