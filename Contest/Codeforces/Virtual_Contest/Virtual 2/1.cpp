
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
   for(int i=0;i<n;i++)
     cin>>arr[i];
   ll sum=0;
   ll f=0,fifty=0,hun=0;
   for(int i=0;i<n;i++)
   {
   	  
   	  
   	    if(arr[i]==25)
   	     sum = sum + 1;
   	
   	     else if(arr[i]==50)
			{
				ll k= 50 -25;
				if(sum!=0)
				{
					sum = sum - 1;
					fifty=fifty + 1;
					
				}
				  
				  
				 else if(sum==0)
				 {
				 	f=1;
				 	break;
				  } 
		   } 
		    else if(arr[i]==100)
			{
			
				if(fifty>=1 && sum>=1 )
				{
					hun = hun + 1;
					fifty = fifty - 1;
					sum = sum -1;
				}
				else if(sum>=3)
				{
					hun = hun + 1;
					sum = sum - 3;
				}
				  
				 else 
				 {
				 	f=1;
				 	break;
				  } 
		   } 
   }
   if(!f)
   cout<<"YES";
   else
   cout<<"NO";
     
}
