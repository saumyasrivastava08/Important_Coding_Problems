/*
  Problem statement:
 As you probably know, Anton goes to school. One of the school subjects that Anton studies is Bracketology. On the Bracketology 
 lessons students usually learn different sequences that consist of round brackets (characters "(" and ")" (without quotes)).
On the last lesson Anton learned about the regular simple bracket sequences (RSBS). A bracket sequence s of length n is an RSBS 
if the following conditions are met:
•	It is not empty (that is n ≠ 0).
•	The length of the sequence is even.
•	First   charactes of the sequence are equal to "(".
•	Last   charactes of the sequence are equal to ")".
For example, the sequence "((()))" is an RSBS but the sequences "((())" and "(()())" are not RSBS.
Elena Ivanovna, Anton's teacher, gave him the following task as a homework. Given a bracket sequence s. Find the number of its 
distinct subsequences such that they are RSBS. Note that a subsequence of s is a string that can be obtained from s by deleting
some of its elements. Two subsequences are considered distinct if distinct sets of positions are deleted.
Because the answer can be very big and Anton's teacher doesn't like big numbers, she asks Anton to find the answer modulo 109 + 7.
Anton thought of this task for a very long time, but he still doesn't know how to solve it. Help Anton to solve this task and 
write a program that finds the answer for it!

Input
The only line of the input contains a string s — the bracket sequence given in Anton's homework. The string consists only of 
characters "(" and ")" (without quotes). It's guaranteed that the string is not empty and its length doesn't exceed 200 000.

Output
Output one number — the answer for the task modulo 109 + 7.

Examples

input
)(()()

output
6

input
()()()

output
7

input
)))

output
0

Note
In the first sample the following subsequences are possible:
•	If we delete characters at the positions 1 and 5 (numbering starts with one), we will get the subsequence "(())".
•	If we delete characters at the positions 1, 2, 3 and 4, we will get the subsequence "()".
•	If we delete characters at the positions 1, 2, 4 and 5, we will get the subsequence "()".
•	If we delete characters at the positions 1, 2, 5 and 6, we will get the subsequence "()".
•	If we delete characters at the positions 1, 3, 4 and 5, we will get the subsequence "()".
•	If we delete characters at the positions 1, 3, 5 and 6, we will get the subsequence "()".
The rest of the subsequnces are not RSBS. So we got 6 distinct subsequences that are RSBS, so the answer is 6.

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
17.	   n%=mod;
18.	   int b=mod-2;
19.	   int res=1;
20.	   while(b>0)
21.	   {
22.	      if(b&1)
23.	        res=((res%mod)*(n%mod))%mod;
24.	      n=((n%mod)*(n%mod))%mod;
25.	      b>>=1;
26.	   }
27.	   return res%mod;
28.	}
29.	main()
30.	{
31.	  ios_base::sync_with_stdio(false);
32.	  cin.tie(NULL);
33.	  cout.tie(NULL);
34.	  factorial();
35.	  string s;
36.	  cin>>s;
37.	  int n=s.length();
38.	  int l=0,r=0;
39.	  for(int i=0;i<n;i++)
40.	    if(s[i]==')')
41.	    ++r;
42.	  int ans=0;
43.	  for(int i=0;r;i++)
44.	  {
45.	    if(s[i]=='(')
46.	    {
47.	      int res=fact[l+r]%mod;
48.	      res=((res%mod)*(inverse(fact[l+1])%mod))%mod;
49.	      res=((res%mod)*(inverse(fact[r-1])%mod))%mod;
50.	      ans=((ans%mod)+(res%mod))%mod;
51.	      l++;
52.	    }
53.	    else
54.	        r--;
55.	  }
56.	  cout<<ans%mod<<"\n";
