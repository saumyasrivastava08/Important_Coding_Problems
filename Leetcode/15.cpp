/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Example 2:

Input: nums = []
Output: []
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int last = 1e9;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(arr[i] == last)
                continue;
            int a = i+1, b = n-1;
            pair<int, int> r(1e7, 1e7);
            int sum = -arr[i];
            while(a < b){

                int temp = arr[a]+arr[b];
                if(temp == sum){
                    if(!(arr[a]==r.first && arr[b] == r.second)){
                        vector<int> v({arr[i], arr[a], arr[b]});
                        ans.push_back(v);
                        r.first = arr[a];
                        r.second = arr[b];
                    }
                    a+=1;
                    b-=1;
                }
                else if(temp < sum){
                    a+=1;
                }
                else{
                    b-=1;
                }
            }
            last = arr[i];
        }

        return ans;
    }
};

