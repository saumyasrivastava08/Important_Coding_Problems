#include <iostream>
#include <set>
using namespace std;


int main() {
	
	set<int,greater<int>> s;//Decreasing order
	s.insert(10);
	s.insert(5);
	s.insert(20);
	for (auto it=s.rbegin();it!=s.rend();it++) {
	    cout<<(*it)<<" ";
	}cout<<endl;
	
	auto it=s.find(10);
	if(it==s.end())
	    cout<<"Not found"<<endl;
	else
	    cout<<"Found"<<endl;
	    
	s.clear();
	cout<<"Size: "<<s.size()<<endl;
	
	return 0;
}
