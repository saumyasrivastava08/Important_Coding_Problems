
#include<bits/stdc++.h>
#define ll long long
#define bsdk  ios_base::sync_with_stdio(false)
#define mod 1000000007
using namespace std;

int main()
{
    
    bsdk;
   ll n;
   cin>>n;
   vector<int>arr(n);
   ll sum =0,k=0;
   for(int i=0;i<n;i++)
   {
    	cin>>arr[i];
         sum=sum + arr[i];
   }
     if(sum % 2 !=0)
   sum = sum/2 + 1;
   else
   sum = sum/2;
   for(int i=0;i<n;i++)
   {
   	  k = k + arr[i];
   	  if(k>=sum)
   	  {
   	  	cout<<i+1<<endl;
   	  	break;
		 }
   	  
    }
  
     
}
