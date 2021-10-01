#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,a,b,d;
	    cin>>x>>y>>a>>b>>d;
	    float p=x/a;
	    float q=y/b;
	    float r= min(p,q);
	    if(r>=d){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
