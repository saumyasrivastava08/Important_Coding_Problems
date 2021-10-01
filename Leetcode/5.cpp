/*
Given a string s, return the longest palindromic substring in s.

 

Example 1:

Input: s = "babad"
Output: "bab"
Note: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
Example 3:

Input: s = "a"
Output: "a"

*/

class Solution {
public:
    
    vector<vector<bool>> dp;
    bool get(int a, int b, string &s){
        if(a==b)
            return true;
        else if(b-a == 1)
            return s[a]==s[b];
        return (s[a] == s[b]) & dp[a+1][b-1];
    }
    
    string longestPalindrome(string s) {
        
        int n = s.length();
        dp = vector<vector<bool>>(n, vector<bool>(n, false));
        for(int i = 0; i < n; i++){
            
            for(int j = 0, k = i; j < n && k < n; ){
                dp[j][k] = get(j, k, s);
                j++;
                k++;
            }
        }
        pair<int, int> res;
        int ans = 1;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(dp[i][j]){
                    if(j-i+1 > ans){
                        res = {i, j};
                        ans = j-i+1;
                    }
                }
            }
        }
        return s.substr(res.first, res.second - res.first + 1);
    }
};