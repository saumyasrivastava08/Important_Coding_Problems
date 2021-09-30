#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int t;
	cin >> t;
	while(t--){
	    long long int ele;
	    cin >> ele;
	    long long int arr[ele];
	    for(int i = 0; i < ele; i++){
	        cin >> arr[i];
	    }
	    long long int min = 9999999;
	    for(int i = 0; i < ele; i++){
	        if(min > arr[i]){
	            min = arr[i];
	        }
	    }
	    cout << min*(ele-1) << "\n";
	}
	return 0;
}
