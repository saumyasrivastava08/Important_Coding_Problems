/*
  Problem Statement:
Little Chikoo likes to play with numbers. Often he plays the following game:
1.	He chooses a number N and a set of positive integers.
2.	He writes down all the numbers from 1 to N.
3.	He chooses the first number (say x) from the set and cancels out all the multiples of x from 1 to N, including x.
4.	He repeats step 3 for all the numbers from the set.
One day Little Chikoo was in a mood to play pranks. So his brother asked him to play the game with a certain challenge. 
He made the game a little harder and asked him to find out the number of integers which aren't cancelled after he completes
step 4. If he does that then Little Chikoo gets to play on his brother's Nintendo for one full day. Now Little Chikoo is in
a hurry and wants to finish the job as soon as possible. He has asked for your help.

Input
The first line of the input contains N and K. (N <= 10^9, K <= 15)
Then K numbers follow all in a single line. All numbers are <= 100.

Output
The output file must contain the number of integers that aren't cancelled after he finishes step 4 of the game.

Example

Input:
10 3
2 4 5

Output:
4
(The numbers 1, 3, 7 and 9 weren't cancelled).

*/
// My code
#include<bits/stdc++.h>
#define int long long int
using namespace std;
main()
{
  int n,k;
  cin>>n>>k;
  int a[k],i;
  for(i=0;i<k;i++)
    cin>>a[i];
  int ans=0;
  for(i=1;i<(1<<k);i++)
  {
    int s=0,lcm=1;
    for(int j=0;j<k;j++)
    {
      if(i&(1<<j))
      {
        s++;
        lcm=(lcm*a[j])/__gcd(lcm,a[j]);
      }
    }
    if(s%2)
        ans+=n/lcm;
    else
        ans-=n/lcm;
  }
  cout<<n-ans<<"\n";
}
