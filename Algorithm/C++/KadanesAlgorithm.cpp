/*
    ----- Kadane's Algorithm -----
    Description : Kadane's Algorithm is used to find the the maximum contigous sub-array sum of an Array.
*/

#include<bits/stdc++.h>
using namespace std;

int maximumSubArraySum(int a[],int n) {
     int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i <n; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}


int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    cout << maximumSubArraySum(a,n) << endl;
}


/*
    Test Cases : 
    Input : 
    n = 8
    a[] = -2 -3 4 -1 -2 1 5 -3
    Output :  7
    --------------------------
    Input : 
    n = 9
    a[] = -2 1 -3 4 -1 2 1 -5 4
    Output : 6
    ---------------------------
    Link : https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
*/