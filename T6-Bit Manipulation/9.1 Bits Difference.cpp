#include<bits/stdc++.h>
using namespace std;
 int countSetBits(unsigned int n)
    {
      int count = 0;
      while(n)
      {
        count += n & 1;
        n >>= 1;
        
      }
      return count;
    }

    int countBitsFlip(int a, int b){
        
        int ans = 0;
        ans = a^b;
        return countSetBits(ans);
        
    }
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<countBitsFlip(a,b)<<endl;
}
