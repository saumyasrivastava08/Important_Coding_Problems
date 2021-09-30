// The problem link is https://www.codechef.com/problems/HS08TEST
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int x;
	float y,d;
	cin>>x;
	cin>>y;
	d=x+0.50;
	if(d>y||x%5!=0)
	{
	    cout<<fixed<<setprecision(2)<<y;
	}
	else
	    {
	        y=y-x-0.5;
	        cout<<fixed<<setprecision(2)<<y;
	    }
	return 0;
}
