#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	      ll n;
	      cin>>n;
	      unordered_set<ll>us;
	      vector<ll>arr(n);
	      for(int i=0;i<n;i++)
	      {
	      	cin>>arr[i];
	      	us.insert(arr[i]);
		  }
		  cout<<us.size()<<"\n";
	}
}

