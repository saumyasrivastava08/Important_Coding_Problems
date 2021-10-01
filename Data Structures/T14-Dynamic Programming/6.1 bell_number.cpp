#include<iostream>
using namespace std;
 
int bellNumber(int n)
{
   int bell[n+1][n+1];
   bell[0][0] = 1;
   for (int i=1; i<=n; i++)
   {

      bell[i][0] = bell[i-1][i-1];
 
 
      for (int j=1; j<=i; j++)
         bell[i][j] = bell[i-1][j-1] + bell[i][j-1];
   }
   return bell[n][0];
}
 
int main()
{
   for (int n=0; n<=5; n++)
      cout << "Bell Number " << n << " is "
           << bellNumber(n) << endl;
   return 0;
}