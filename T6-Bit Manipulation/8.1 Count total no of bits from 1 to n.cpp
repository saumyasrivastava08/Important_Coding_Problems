#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n)
    {
        
          n++;
        int count=0;
        for( int i=2 ; i/2<n ; i=i*2 )
        {
            int a = n/i;
            count += a * i / 2;
            
            int r = n%i;
            if(r > i/2)
                count += r - i/2;
        }
        
        return count;
    }
    
int main()
{
	int n;
	cin>>n;
	cout<<countSetBits(n)<<endl;
}
