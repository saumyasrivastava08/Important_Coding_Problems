//Problem : Leetcode (https://leetcode.com/problems/largest-number/)

class Solution
{
public:
    static bool csort(string a, string b)
    {
        string ab = a.append(b);
        string ba = b.append(a);
        return ab > ba;
    }
    string largestNumber(vector<int> &n)
    {
        vector<string> nums;
        for (int i = 0; i < n.size(); i++)
        {
            nums.push_back(to_string(n[i]));
        }
        sort(nums.begin(), nums.end(), csort);
        string res = "";
        for (int i = 0; i < n.size(); i++)
        {
            res += nums[i];
        }
        if (res[0] != '0')
            return res;
        return "0";
    }
};