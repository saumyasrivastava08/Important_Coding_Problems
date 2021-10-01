
int parent[300001],rak[300001];
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
    return parent[v]=find_set(parent[v]);
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
    if(rak[u]==rak[v])
        rak[u]++;
  }
}



