#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v, e; //v=vertices, e=edges
    cin >> v >> e;
    int count = 0;
    vector<vector<int>> adj(v); //ADJ list
    vector<int> indeg(v, 0);    // indegree vector
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        //from u to v  (u-->v)
        adj[u].push_back(v); // push v in u's adj
        indeg[v]++;          //increase v's indegree
    }
    queue<int> pq;
    for (int i = 0; i < v; i++)
    {
        if (indeg[i] == 0) //check for 0 indegree
        {
            pq.push(i);
        }
    }
    while (!pq.empty())
    {
        count++;
        int x = pq.front(); //pushed elements
        pq.pop();
        cout << x << " ";
        
        //x-->v
        for (auto it : adj[x])
        {
            indeg[it]--; //decrease indeg of adjacent nodes
            if (indeg[it] == 0)
                pq.push(it);
        }
    }
    // Check if there was a cycle
    if (count != v)
    {
        cout << "There exists a cycle in the graph\n";
       
    }
    cout << count;
    return 0;
}
//TIME COMPLEXITY= O(V+E)
//Space= O(V) for queue

//Input
// 6 6 
// 5 2
// 5 0
// 4 0
// 4 1
// 2 3
// 3 1

//4 5 2 0 3 1 6
