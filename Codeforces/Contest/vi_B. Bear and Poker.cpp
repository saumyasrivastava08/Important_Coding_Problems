#include <bits/stdc++.h>
using namespace std;
#define ll long long
 

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	vector<int>arr(t);
	for(int i=0;i<t;i++)
	{
		cin>>arr[i];
	}
 ll k =	*max_element(arr.begin(), arr.end());
 ll f=1;
 ll j= k;
  for(int i=0;i<t;i++)
  {
  	if(arr[i]!=k)
  	{
  		 	if((k%(arr[i]*2)==0 )||(k%(arr[i]*3)==0 ))
  		 	{
  		 			 f=1;
  	           continue;
			   }
			   else
			   {
			   	 f=0;
			   	 break;
			   }
  		 
	 }
   
  	
  }
  if(f==1)
  cout<<"Yes";
  else
  cout<<"No";
}
