/*
  Problem Statement:
Devu is learning Combinatorics in his college. He find it very interesting to calculate number of ways of going to point 
(c,d) from point (a,b) in co-ordinate plane. We can take horizontal and vertical steps only and can not visit at a point 
twice. In a step, you can move one unit only. We have to reach to the point (c,d) from the point (a,b) using abs(a-c)+ abs(b-d) 
steps only.
Devu has two sets of points. Set A contains points having X co-ordinate 0 and Y co-ordinates varying from 1 to N(both inclusive).
Set B contains points having X co-ordinate K and Y co-ordinates varying from 1 to N(both inclusive). Both sets contains N number
of integral points. He wants to calculate the sum of number of ways to going to the each point of set B from the each point of set A .
As the answer can be large, print it modulo 1000000007.

Input
•	First line of input contains an integer T denoting number of test cases.
•	Next T lines will contain pair of integers N and K

Output
For each test case, print a single integer representing the answer of that test case.

Constraints

Subtask #1: 10 points
o	1 ≤ T ≤ 20, 1 ≤ N ,K ≤ 1000

Subtask #1: 10 points
o	1 ≤ T ≤ 20, 1 ≤ N ,K ≤ 106

Subtask #3: 80 points
o	1 ≤ T ≤ 10000, 1 ≤ N,K ≤ 106

Example
Input:
2
2 2
4 5

Output:
8
236

Explanation
For the first sample case,

ways[(0,1)->(2,1)]= 1

ways[(0,2)->(2,2)]= 1

ways[(0,1)->(2,2)]= 3

ways[(0,2)->(2,1)]= 3

Find the number of ways to move from all points in set X = \{(0,i): 1 \leq i \leq n \}X={(0,i):1≤i≤n} to all point 
in set Y = \{(k,i): 1 \leq i \leq n \}Y={(k,i):1≤i≤n} using minimum number of steps.

EXPLANATION:
We are given two sets of points X and Y (described above) in 2-D grid, and we have to find the number of ways to move 
from all points in X to all points in Y using minimum number of steps. Note that only vertical and horizontal travelling is 
allowed and since we have to move from one point to another in minimum number of steps, we cannot visit a point twice.

*/

// My code:
#include<bits/stdc++.h>
#define pb push_back
#define int long long int
#define vec vector<int>
#define REP(i,a,b) for(i=a;i<b;i++)
using namespace std;
int mod=1e9+7;
int fact[3000001];
void factorial()
{
  fact[1]=1,fact[0]=1;
  for(int i=2;i<3000001;i++)
    fact[i]=((i%mod)*(fact[i-1]%mod))%mod;
}
int inverse(int n)
{
  n%=mod;
  int res=1,b=mod-2;
  while(b>0)
  {
    if(b&1)
        res=((res%mod)*(n%mod))%mod;
    n=((n%mod)*(n%mod))%mod;
    b>>=1;
  }
  return res%mod;
}
main()
{
  factorial();
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    cout<<((2*((fact[n+k+1]%mod)*((inverse(fact[k+2])%mod)*(inverse(fact[n-1])%mod)%mod)))%mod +mod -n)%mod<<"\n";
  }
}
