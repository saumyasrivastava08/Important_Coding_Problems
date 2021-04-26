#define ll long long
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ll n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	 map<int,int>mp;
     for(int i=0;i<n;i++)
     {
     	mp[arr[i]]++;
	 }
	  vector<pair<int, int> > A;
  
    for (auto it : mp) {
        A.push_back(it);
    }
	
 sort(A.begin(),A.end());
 cout<<A[A.size()-1].first<<" "<<A[A.size()-1].second;
}
