#define ll long long

#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll n;

	cin>>n;
    vector<int>arr;
    vector<int>brr;
    vector<int>crr;
    int a,b,c;
    ll res =0 , res1=0 , res2=0;
    for(int i=0;i<n;i++)
    {
    	cin>>a;
    	arr.push_back(a);
    	res = res ^ arr[i];
	}
	 for(int i=0;i<n-1;i++)
    {
    	cin>>b;
    	brr.push_back(b);
    	res1 = res1 ^ brr[i];
	}
	 for(int i=0;i<n-2;i++)
    {
    	cin>>c;
    	crr.push_back(c);
    	res2 = res2 ^ crr[i];
	}
  
       cout<<(res^res1)<<endl<<(res1^res2); 
        
}

