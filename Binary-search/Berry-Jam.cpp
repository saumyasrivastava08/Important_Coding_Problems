/*
  Problem statement:
Karlsson has recently discovered a huge stock of berry jam jars in the basement of the house. More specifically, there
were   2n jars of strawberry and blueberry jam.
All the   2n jars are arranged in a row. The stairs to the basement are exactly in the middle of that row. So when
Karlsson enters the basement, he sees exactly  n jars to his left and  n jars to his right.
For example, the basement might look like this:
 
Being the starightforward man he is, he immediately starts eating the jam. In one minute he chooses to empty either the
first non-empty jar to his left or the first non-empty jar to his right.
Finally, Karlsson decided that at the end the amount of full strawberry and blueberry jam jars should become the same.
For example, this might be the result:
 He has eaten  1 jar to his left and then  5 jars to his right. There remained exactly  3 full jars of both strawberry
 and blueberry jam.
Jars are numbered from  1 to   2n from left to right, so Karlsson initially stands between jars  n and    n+1.
What is the minimum number of jars Karlsson is required to empty so that an equal number of full strawberry and blueberry
jam jars is left?
Your program should answer  t independent test cases.
Input
The first line contains one integer  t (        1≤t≤1000) — the number of test cases.
The first line of each test case contains a single integer  n (       1≤n≤105).
The second line of each test case contains   2n integers            a1,a2,…,a2n (      1≤ai≤2) —     ai=1 means that
the  i-th jar from the left is a strawberry jam jar and     ai=2 means that it is a blueberry jam jar.
It is guaranteed that the sum of  n over all test cases does not exceed    105.
Output
For each test case print the answer to it — the minimum number of jars Karlsson is required to empty so that an equal 
number of full strawberry and blueberry jam jars is left.

Example

input
4
6
1 1 1 2 2 1 2 1 2 1 1 2
2
1 2 1 2
3
1 1 1 1 1 1
2
2 1 1 1

output
6
0
6
2

Note
The picture from the statement describes the first test case.
In the second test case the number of strawberry and blueberry jam jars is already equal.
In the third test case Karlsson is required to eat all  6 jars so that there remain  0 jars of both jams.
In the fourth test case Karlsson can empty either the second and the third jars or the third and the fourth one. The both scenarios will leave  1 jar of both jams.

*/

// My code
#include<bits/stdc++.h>
#define pb push_back
#define pii pair<int,int>
#define int long long int
#define vec vector<int>
#define inf 1e18
using namespace std;
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt=1;
  cin>>tt;
  while(tt--)
  {
    int n;
    cin>>n;
    n*=2;
    int a[n+1],i;
    for(i=1;i<=n;i++)
        cin>>a[i];
    int o=0,z=0;
    int pr[n+1]={0};
    map<int,int> h,h2;
    for(i=1;i<=n;i++)
        if(a[i]==1)
            o++;
        else
            z++,a[i]=-1;
    for(i=1;i<=n;i++)
        pr[i]+=pr[i-1]+a[i];
    for(i=n/2;i<=n;i++)
        if(h[pr[i]]==0)
        h[pr[i]]=i;
    for(i=n/2;i>=0;i--)
        if(h2[pr[i]]==0)
        h2[pr[i]]=i;
    int ans=inf;
    o-=z;
    for(i=0;i<=n/2;i++)
    {
      if(h[pr[i]+o]>i)
            ans=min(ans,h[pr[i]+o]-i);
    }
    if(!o)
    ans=min(ans,o);
    cout<<ans<<"\n";
  }
}

//  Learnings
/*
1.	We can find subarray sum with a given condition that we need to take a particular index in the subarray. 
2.	We can use prefix sum technique, fixing left index and binary searching the right index.
3.	Time  complexity is O(nlogn).

*/
