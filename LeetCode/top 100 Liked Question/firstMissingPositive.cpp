/*
    Given an unsorted integer array nums, return the smallest missing positive integer.

    You must implement an algorithm that runs in O(n) time and uses constant extra space.
*/

#include <iostream>
#include <vector>

using namespace std;
 
int firstMissingPositive(vector<int>& nums)
{
    int n = nums.size();
     // Loop to traverse the whole array
    for (int i = 0; i < n; i++) 
    {
        
        // Loop to check boundary
        // condition and for swapping
        while (nums[i] >= 1 && nums[i] <= n
               && nums[i] != nums[nums[i] - 1]) {
            swap(nums[i], nums[nums[i] - 1]);
        }
    }
    
    // Checking any element which 
    // is not equal to i+1
    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }
    
    // Nothing is present return last index
    return n + 1;
}
 
// Driver code
int main() {
    int n;
    cout << "Enter the size of vector/array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter vector/array elements: ";
    for(int i = 0;i<n;i++)
    {
        cin >> nums[i];
    }

    cout << firstMissingPositive(nums) << endl;
}

/*
    Test Case - 1: 

    Enter the size of vector/array: 3
    Enter vector/array elements: 1 2 0 
    Answer: 3

    Test Case - 2: 

    Enter the size of vector/array: 4
    Enter vector/array elements: 3 4 -1 1
    Answer: 2

    Test Case - 3

    Enter the size of vector/array: 5
    Enter vector/array elements: 7 8 9 11 12
    Answer: 1

    Link to the problem: https://leetcode.com/problems/first-missing-positive/
*/