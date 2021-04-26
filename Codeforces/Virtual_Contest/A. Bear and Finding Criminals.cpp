#define ll long long
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int n ,a;
 	cin>>n>>a;
 	vector<int>arr(n);
 	for(int i=0;i<n;i++)
 	cin>>arr[i];
 	vector<int> kk , mm;
 	for(int i=(a-2);i>=0;i--)
 	kk.push_back(arr[i]);
 	for(int i = (a);i<n;i++)
 	mm.push_back(arr[i]);
 	int jj= kk.size();
 	int pp = mm.size();
 	ll cc=0;
 	if(arr[a-1]==1)
 	 cc=cc+1;
 	if(jj<=pp)
 	{
 		for(int i =0 ;i<jj ;i++)
 		{
 				if(kk[i]==mm[i] && kk[i]!=0)
 				 cc=cc+2;;
		 }
		 for(int i =jj;i<pp;i++)
		    {
		    	if(mm[i]==1)
		    //	cout<<"   "<<mm[i]<<endl;
		    	cc++;
			}
 	
	 }
	 else
	 {
	 		for(int i =0 ;i<pp ;i++)
 		{
 				if(kk[i]==mm[i] && kk[i]!=0)
 				 cc=cc+2;
		 }
		 for(int i =pp;i<jj;i++)
		    {
		    	if(kk[i]==1)
		    	cc++;
			}
	 }
	 cout<<cc<<endl;
 	/*	for(int i = 0;i<kk.size();i++)
         cout<<kk[i]<<" "<<endl;
 		for(int i = 0;i<mm.size();i++)
 	 cout<<mm[i]<<" ";*/
 }
