/*
    ----- Binary Search -----
    Description : Binary Search is used to find an element in an array in log(n) time.
    Prerequisite : Array should be sorted.
*/

#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int a[],int n,int key) {
    int low=0,high=n-1;
    while(low < high) {
        int mid = low + (high-low)/2;
        if(a[mid] == key) {
            return true;
        }
        else if(key <= a[mid]) {
            high = mid;
        }else{
            low = mid + 1;
        }
    }
    return false;
}

int main() {
    int n,key;
    cin >> n >> key;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    cout << binarySearch(a,n,key) << endl;
}

/*
Test Cases : 
Input : 
n = 5 , key = 4
a[] = 1 2 3 4 5
Output : True
-----------------------
Input : 
n = 5 , key = 3
a[] =  1 4 5 7 9
Output : False
-----------------------------
Link : https://www.geeksforgeeks.org/binary-search/
*/