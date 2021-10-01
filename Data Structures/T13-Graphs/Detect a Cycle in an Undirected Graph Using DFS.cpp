#include<bits/stdc++.h>
using namespace std;
class Solution {
// Detect a Cycle in an Undirected Graph Using DFS in Solution class
public:
    bool checkForCycle(int node, int parent, vector<int> &vis, vector<int> adj[]) {
        vis[node] = 1; 
        for(auto it: adj[node]) {
            if(!vis[it]) {
                if(checkForCycle(it, node, vis, adj)) 
                    return true; 
            }
            else if(it!=parent) 
                return true; 
        }
        
        return false; 
    }
public:
	bool isCycle(int V, vector<int>adj[]){
	    vector<int> vis(V+1, 0); 
	    for(int i = 0;i<V;i++) {
        //Checking for different components of the graph
	        if(!vis[i]) {
            // Initializing starting node parent to -1 in the current component of the graph
	            if(checkForCycle(i, -1, vis, adj)) return true; 
	        }
	    }
	    
	    return false; 
	}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  
