// Problem: Leetcode(https://leetcode.com/problems/longest-substring-without-repeating-characters/)

class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int max_len = 0;
        int i = 0;
        int j = 0;
        int n = s.length();
        unordered_map<char, int> char_map;
        while ((i < n) && (j < n))
        {
            char c = s[j];
            unordered_map<char, int>::iterator it = char_map.find(c);
            if (it == char_map.end())
            {
                char_map[c] = j;
                j++;
                if (char_map.size() > max_len)
                    max_len = char_map.size();
            }
            else
            {
                i = it->second + 1;
                char_map.clear();
                j = i;
            }
        }
        return max_len;
    }
};