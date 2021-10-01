/*
  Problem statement:
  
John is playing a game with his friends. The game's rules are as follows: There is deck of N cards from which each person 
is dealt a hand of K cards. Each card has an integer value representing its strength. A hand's strength is determined by 
the value of the highest card in the hand. The person with the strongest hand wins the round. Bets are placed before each 
player reveals the strength of their hand.
John needs your help to decide when to bet. He decides he wants to bet when the strength of his hand is higher than the 
average hand strength. Hence John wants to calculate the average strength of ALL possible sets of hands. John is very good 
at division, but he needs your help in calculating the sum of the strengths of all possible hands.

Problem
You are given an array a with N ≤ 10 000 different integer numbers and a number, K, where 1 ≤ K ≤ N. For all possible subsets 
of a of size K find the sum of their maximal elements modulo 1 000 000 007.

Input
The first line contains the number of test cases T, where 1 ≤ T ≤ 25
Each case begins with a line containing integers N and K. The next line contains N space-separated numbers 0 ≤ a [i] ≤ 2 000 000 000, 
which describe the array a.

Output
For test case i, numbered from 1 to T, output "Case #i: ", followed by a single integer, the sum of maximal elements for all 
subsets of size K modulo 1 000 000 007.

Example input
5
4 3
3 6 2 8 
5 2
10 20 30 40 50 
6 4
0 1 2 3 5 8 
2 2
1069 1122 
10 5
10386 10257 10432 10087 10381 10035 10167 10206 10347 10088 

Example output
Case #1: 30
Case #2: 400
Case #3: 103
Case #4: 1122
Case #5: 2621483

*/

// My solution: 

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
34.	  int t;
35.	  cin>>t;
36.	  int test=1;
37.	  while(t--)
38.	  {
39.	    int n,k;
40.	    cin>>n>>k;
41.	    int a[n],i;
42.	    for(i=0;i<n;i++)
43.	        cin>>a[i];
44.	    sort(a,a+n);
45.	    int ans=0;
46.	    n--,k--;
47.	    while(n>=k)
48.	    {
49.	      int res=(fact[n]%mod);
50.	      res=((res%mod)*(inverse(fact[k])%mod))%mod;
51.	      res=((res%mod)*(inverse(fact[n-k])%mod))%mod;
52.	      res=((a[n]%mod)*(res%mod))%mod;
53.	      ans=((ans%mod)+(res%mod))%mod;
54.	      n--;
55.	    }
56.	    cout<<"Case #"<<test<<": "<<ans<<"\n";
57.	    test++;
58.	  }
59.	} 
