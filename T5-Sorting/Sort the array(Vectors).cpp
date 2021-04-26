#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
    vector<int> v;
    int n,a;
	cin>>n;
	
	for(int i=0;i<n;i++)
	 {
	 	cin>>a;
	 	v.push_back(a);
	 }
	
	sort(v.begin(),v.end());
	
	for(int x: v)
	    cout<<x<<" ";
	
	sort(v.begin(),v.end(),greater<int>());
	
	cout<<endl;
	for(int x: v)
	    cout<<x<<" ";
}
