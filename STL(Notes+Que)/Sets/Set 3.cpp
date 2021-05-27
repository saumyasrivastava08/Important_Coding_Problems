#include <iostream>
#include <set>
using namespace std;


int main() {
	
	set<int> s;
	s.insert(10);
	s.insert(5);
	s.insert(20);
	s.insert(7);
	
	if(s.count(10))
	    cout<<"Found"<<endl;
	else
	    cout<<"Not Found"<<endl;
	    
	s.erase(5);
	for(int x: s){
	    cout<<x<<" ";
	}cout<<endl;
	
	auto it=s.find(7);
	s.erase(it);
	for(int x: s){
	    cout<<x<<" ";
	}cout<<endl;
	
	return 0;
}
