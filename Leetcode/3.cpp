
/*
Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string st) {
        
        vector<int> flag(200, -1);
        int num = 0;
        int n = st.length();
        int ans = 0, cnt = 0;
        for(int i = 0; i < n; i++){
            int x = st[i];
            if(flag[x] >= num){
                ans = max(ans, cnt);
                cnt = i - flag[x] - 1;
                num = flag[x]+1;
            }
            flag[x] = i;
            cnt+=1;
        }
        ans = max(ans, cnt);
        return ans;
    }
};