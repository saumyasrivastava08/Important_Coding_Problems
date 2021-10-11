/*
  Climb Stairs asked in LeetCode Dynamic Programming Question
  Contributed by Srijan Singh
  1 Oct 2021
  Hacktoberfest 2021
*/

#include <iostream>

class Solution {

  int *memo;

public:

    int climbStairs(int n) 
    {
      memo = new int[n+1];

      return numberOfSteps(n, memo);        
    }
    
    int numberOfSteps(int n, int memo[])
    {
      if (n == 2 or n == 1)
        {
            return n;
        }

        for(int i=0; i<n; i++)
        {
          if(n == memo[i])
          {
            return memo[n];
          }
        }

        memo[n] = numberOfSteps(n-1, memo) + numberOfSteps(n-2, memo);

        return memo[n];
    }

    ~Solution()
    {
      delete memo;
    }
};  

int main(){
  Solution s;
  std::cout<<s.climbStairs(45);
}
