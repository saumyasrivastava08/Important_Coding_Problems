//Problem : LeetCode(https://leetcode.com/problems/two-sum/solution/)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
      vector<int> twoSum(vector<int>& nums, int target) {
                map<int,int> m;
                vector<int> v;
                int n= nums.size();
                for(int i=0;i<n;i++)
                {
                    
                        int diff = target - nums[i];
                        if(m.find(diff) != m.end())
                        {
                        auto p = m.find(diff);        
                        v.push_back(p->second);
                        v.push_back(i);
                        }
                        m.insert(make_pair(nums[i],i));
                }
          
                return v;
}
};


int main(){
    Solution s ;
    vector<int> v;
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         int element;
         cin>>element;
         v.push_back(element);
     }
     int target;
     cin>>target;
     vector<int> result= s.twoSum (v, target);
     for(int i: result)
     {
          cout<<i<<endl;
     }
     return 0;

}