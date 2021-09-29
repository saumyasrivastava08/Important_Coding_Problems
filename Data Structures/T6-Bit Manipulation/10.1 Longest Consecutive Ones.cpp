#include<bits/stdc++.h>
using namespace std;
 int maxConsecutiveOnes(int N)
    {
       int count=0;
         while (N!=0)
        {
            N = (N & (N << 1));
            count++;
        }
        return count;
    }
int main()
{
	int N;
	cin>>N;
	cout<<maxConsecutiveOnes(N)<<endl;
}
