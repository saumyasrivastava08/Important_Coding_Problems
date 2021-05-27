#include <iostream>
#include <set>
using namespace std;


int main() {
	
	set<int> s;
	s.insert(10);
	s.insert(5);
	s.insert(20);

	auto it=s.lower_bound(5);
	if(it!=s.end())
	    cout<<(*it)<<endl;
	else
	    cout<<"Given element is greater than the largest"<<endl;
	   
	it=s.upper_bound(5);
	if(it!=s.end())
	    cout<<(*it)<<endl;
	else
	    cout<<"Given element is greater than the largest"<<endl;
	    
	return 0;
}
