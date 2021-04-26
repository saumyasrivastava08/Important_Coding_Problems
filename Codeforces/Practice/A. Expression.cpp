#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll a,b,c;
	cin>>a>>b>>c;
	ll k = 0 , l=0 , m=0 ,n =0 ,o=0;
	
	k = a+b*c;
	l= a*(b+c);
	m= (a+b)*c;
	n = a*b*c;
	o= a+b+c;
	vector<int>arr;
	arr.push_back(k);
	arr.push_back(l);
	arr.push_back(m);
	arr.push_back(n);
	arr.push_back(o);
	sort(arr.begin(),arr.end(), greater<int>());
	cout<<arr[0];
}
