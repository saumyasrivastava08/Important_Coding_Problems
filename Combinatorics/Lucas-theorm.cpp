/*
  Problem statement:
Once Happy was playing with his friends during his maths class. Seeing this, his teacher asked him to solve a problem. 
The teacher gave him a set of n positive integers and asked him to tell the sum of the product of elements of all the 
possible subsets.
For e.g. Say, the teacher gave him a set {2, 3, 5}. The possible subsets of this set are {2}, {3}, {5}, {2, 3}, {2, 5}, 
{3, 5} and {2, 3, 5}. So Happy should report the answer as the sum of 2, 3, 5, 6 (2 * 3), 10 (2 * 5), 15 (3 * 5) and 30 (2 * 3 * 5) 
i.e., 71 to the teacher.
As the output of the problem can be large, so the teacher asked happy to report the answer modulo 109+7 (1000000007).

INPUT:
The first line of input contains an integer n denoting the number of elements in the set and the next line consists of n space 
separated integers. The ith integer is denoted by a_i.

OUTPUT:
Print the answer modulo 109+7 (1000000007).

Constraints:
1 ≤ n ≤ 105
0 ≤ a_i ≤ 107

SAMPLE INPUT
3
2 3 5

SAMPLE OUTPUT
71

Explanation
For sample input, the set consists of 3 integers 2, 3 and 5. The possible subsets of this set are {2}, {3}, {5}, {2, 3}, {2, 5}, {3, 5}
and {2, 3, 5}. The product of elements of the subsets are 2, 3, 5, 6, 10, 15 and 30. The sum of these products is 71. So the 
answer is 71%(10^9+7) = 71.

*/
/*
  My code:
*/
#include<bits/stdc++.h>
#define pp pop_back
#define pb push_back
#define int long long int
#define INF 1e18
#define vec vector<int>
#define pii pair<int,int>
#define REP(i,a,b) for(i=a;i<b;i++)
using namespace std;
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
  //cin>>t;
  while(t--)
  {
    int n,mod=1e9+7;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    int ans=1;
    for(i=0;i<n;i++)
    ans=((ans%mod)*((a[i]+1)%mod))%mod;
    cout<<(ans-1+mod)%mod;
  }
}


