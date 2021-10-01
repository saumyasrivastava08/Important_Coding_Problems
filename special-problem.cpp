/*
  Problem statement:
An undirected graph of n nodes is defined by edgeList, where edgeList[i] = [ui, vi, disi] denotes an edge between nodes ui and vi 
with distance disi. Note that there may be multiple edges between two nodes.

Given an array queries, where queries[j] = [pj, qj, limitj], your task is to determine for each queries[j] whether there is a path
between pj and qj such that each edge on the path has a distance strictly less than limitj .

Return a boolean array answer, where answer.length == queries.length and the jth value of answer is true if there is a path for 
queries[j] is true, and false otherwise.

Example 1:

Input: n = 3, edgeList = [[0,1,2],[1,2,4],[2,0,8],[1,0,16]], queries = [[0,1,2],[0,2,5]]

Output: [false,true]

Explanation: The above figure shows the given graph. Note that there are two overlapping edges between 0 and 1 with
distances 2 and 16.
For the first query, between 0 and 1 there is no path where each distance is less than 2, thus we return false for 
this query.
For the second query, there is a path (0 -> 1 -> 2) of two edges with distances less than 5, thus we return true 
for this query.

Example 2:

Input: n = 5, edgeList = [[0,1,10],[1,2,5],[2,3,9],[3,4,13]], queries = [[0,4,14],[1,4,13]]
Output: [true,false]
Exaplanation: The above figure shows the given graph.

Constraints:

2 <= n <= 105
1 <= edgeList.length, queries.length <= 105
edgeList[i].length == 3
queries[j].length == 3
0 <= ui, vi, pj, qj <= n - 1
ui != vi
pj != qj
1 <= disi, limitj <= 109
There may be multiple edges between two nodes.
*/

/*
  interesting things:
(i)	Reduced complexity from O((n+m)*q) to O(q+n+m).

*/
// My code
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef vector<int> vi;
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int par[100005];
int find(int x) {
  return par[x] == x ? x : (par[x] = find(par[x]));
}
void merge(int x, int y) {
  par[find(x)] = find(y);
}

class Solution {
public:
    vector<bool> distanceLimitedPathsExist(int n, vector<vector<int>>& edgeList, vector<vector<int>>& queries) {
        for(int i = 0; i <= n; i++) par[i] = i;
        vector<bool> ret(sz(queries));
        vector<array<int, 3>> edges; // w, u, v
        for(auto& out: edgeList) {
          edges.pb({out[2], out[0], out[1]});
        }
        vector<array<int, 4>> qs;
        for(int i = 0; i < sz(queries); i++) {
          vector<int>& out = queries[i];
          qs.push_back({out[2], out[0], out[1], i});
        }
        sort(all(edges));
        sort(all(qs));
        int j = 0;
        int i = 0;
        while(j < sz(qs)) {
          while(i < sz(edges) && edges[i][0] < qs[j][0]) {
            merge(edges[i][1], edges[i][2]);
            i++;
          }
          if(find(qs[j][1]) == find(qs[j][2])) {
            ret[qs[j][3]] = true;
          }
          j++;
        }
        return ret;
    }
};
