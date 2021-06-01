#include <bits/stdc++.h>
#define bsdk std::ios::sync_with_stdio(false)
#define ll long long
using namespace std;

int main() {
	bsdk;
	ll t; 
	cin >> t;
	while(t--)
	{
	    ll n, m, k; 
	    cin>>n>>m>>k;
	    ll c=0;
	     vector<int>arr(k);
	    for(ll i=0; i<k; i++) 
		   cin>>arr[i];
	    map<ll, ll>mp;
	    vector<int>v;
	    for(int i=0; i<k; i++)
	    {
	    	 if(arr[i] <= n) 
			{
			mp[arr[i]]++;
	    	}
		}
	       
	    for(auto x: mp){
	        if(x.second > 1){
	            v.push_back(x.first);
	            c++;
	        }
	    }
	    cout << c << " ";
	    for(int i=0; i<v.size(); i++) 
		  cout << v[i] << " ";
	    cout << endl;
	}
}
