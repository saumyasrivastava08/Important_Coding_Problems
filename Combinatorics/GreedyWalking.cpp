/*
  Problem statement:
Reginald is an N-dimensional traveler who wants to return to Filipistonia's Kingdom. He has an Obsessive-compulsive disorder 
in the way he travels so he can only do it following particular rules:
1.	Every step is exactly one unit long.
2.	He only moves in one dimension at a time.
3.	He only travels along the positive direction for each dimension.
For example, when traveling on a two-dimensional place. He can travel along either the X or the Y axis at any given time, 
but never on both at the same time. Moreover, since he only travels along the positive direction and every step is one unit 
long, his only possible moves are (+1, 0) and (0, +1).
As you can see, he is a Greedy Walker: once he makes a decision he assumes it is the correct and he never goes back.

Given a starting position in an N-dimensional space (x1i, x2i, ... ,xni) your task is to count the number of diff
erent travels he can make to position (x1f, x2f, ... , xnf) modulo 1000000007.

Input
The input contains several test cases, each one corresponding to a single travel. Each test case consists of a single line 
with one integer (1 <= N <=  50) followed by two lines each one with N integers, fi 
rst line will be initial position and second line will be target position.

You can assume that 0 <= xki <= x1f <= 500 for all k, 1 <= k <= N and Sum(xki-xkf) <= 500.
The end of input is indicated by a test case with N = 0.

Output
For each travel output a single line with one integer, the number of diff
erent travels that exist from the initial position to the final position modulo 1000000007.

Example

Input:
2
2 1
5 5
4
0 0 0 0
1 2 3 4
5
1 2 3 4 5
8 5 6 4 8
5
0 0 0 0 0
100 100 100 100 100
0

Output:
35
12600
19219200
257055440


*/
/*
  My code:
*/
1.	#include<bits/stdc++.h>
2.	#define pb push_back
3.	#define int long long int
4.	#define vec vector<int>
5.	#define REP(i,a,b) for(i=a;i<b;i++)
6.	using namespace std;
7.	int mod=1e9+7;
8.	int fact[3000001];
9.	void factorial()
10.	{
11.	  fact[1]=1,fact[0]=1;
12.	  for(int i=2;i<3000001;i++)
13.	    fact[i]=((i%mod)*(fact[i-1]%mod))%mod;
14.	}
15.	int inverse(int n)
16.	{
17.	  n%=mod;
18.	  int res=1,b=mod-2;
19.	  while(b>0)
20.	  {
21.	    if(b&1)
22.	        res=((res%mod)*(n%mod))%mod;
23.	    n=((n%mod)*(n%mod))%mod;
24.	    b>>=1;
25.	  }
26.	  return res%mod;
27.	}
28.	main()
29.	{
30.	  ios_base::sync_with_stdio(false);
31.	  cin.tie(NULL);
32.	  cout.tie(NULL);
33.	  factorial();
34.	  while(1)
35.	  {
36.	    int n;
37.	    cin>>n;
38.	    if(n==0)
39.	        return 0;
40.	    int a[n],b[n],c[n],i;
41.	    for(i=0;i<n;i++)
42.	        cin>>a[i];
43.	    for(i=0;i<n;i++)
44.	        cin>>b[i];
45.	    for(i=0;i<n;i++)
46.	        c[i]=abs(a[i]-b[i]);
47.	    int sum=0;
48.	    for(i=0;i<n;i++)
49.	        sum+=c[i];
50.	    int ans=fact[sum]%mod;
51.	    for(i=0;i<n;i++)
52.	        ans=(ans*inverse(fact[c[i]]))%mod;
53.	    cout<<ans<<"\n";
54.	  }
55.	} 
