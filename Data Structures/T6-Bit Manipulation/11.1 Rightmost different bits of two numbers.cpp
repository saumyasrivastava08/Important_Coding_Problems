#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
    int res=0;
      while(n>=0 && m>=0)
      {
          if(n%2==m%2)
          {
              res++;
              n=n/2;
              m=m/2;
              
          }
          else if(n%2!=m%2)
              break;
      }
        cout<< res+1<<endl;
      
    }
