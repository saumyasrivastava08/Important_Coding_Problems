#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
   cin>>t;
   while(t--)
   {   
   	long long n,k;
   	cin>>n>>k;
   	string s;
   	cin>>s;
   	int c=0;
    for(int i=0;i<n;i++)
    {
    	if(s[i]=='*')
    	c++;
	}
	if(c==2)
	 cout<<2<<"\n";
	 else if(c==1)
	 cout<<1<<"\n";
	 else
	 {
	 	k=c-2;
	 	k=k/3;
	 	cout<<(k+2)<<"\n";
	 }
   }
}
