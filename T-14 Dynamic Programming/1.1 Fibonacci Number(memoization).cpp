#include <iostream>
#include <string.h>
using namespace std;

int memo[1000000];

int fib(int n)
{
    if(memo[n]==-1)
    {
        int res;
        
        if(n==0 || n==1)
            return n;
        
        else
           { res = fib(n-1)+fib(n-2);
           
            
           }
           
           memo[n]=res;
            
        
    }
    
    return memo[n];
}

int main() {
	
	
	int n ;
	cin>>n;
	memset(memo, -1, sizeof(memo));
		cout<<fib(n);
}
