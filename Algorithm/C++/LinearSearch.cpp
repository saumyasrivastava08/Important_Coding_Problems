/*
    ----- Linear Search -----
    Description : Linear Search is used to find an element inside an array in Linear Fashion.
*/

#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int a[],int n,int key) {
    for(int i=0;i<n;i++) {
        if(a[i] == key) {
            return true;
        }
    }
    return false;
}

int main() {
    int n,key;
    cin >> n >> key;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    cout << linearSearch(a,n,key) << endl;
}

/*
Test Cases : 
Input : 
n = 6 , key = 1
a[] = 1 2 3 3 4 5
Output : True
---------------------
Input : 
n = 5 , key = 3
a[] =  5 1 0 6 9
Output : False
-----------------------
Link : https://www.geeksforgeeks.org/linear-search/
*/