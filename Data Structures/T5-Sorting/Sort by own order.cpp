#include <iostream>
#include <algorithm>
using namespace std;

struct Point{
    int x,y;
};

bool MyComp(Point p1,Point p2){
    return p1.x<p2.x;
}

int main() {
	
    Point arr[]={{3,10},{2,8},{5,4}};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n,MyComp);
	
	for(auto i: arr)
	    cout<<i.x<<" "<<i.y<<endl;
}
