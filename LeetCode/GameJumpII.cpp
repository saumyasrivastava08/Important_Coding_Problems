// Problem : Leetcode (https://leetcode.com/problems/jump-game-ii/)

int solve_fast(vector<int> &nums)
{
    int n = nums.size();
    int max_dist = nums[0], local_max = 0, jumps = 0;
    for (int i = 1; i < n; i++)
    {
        local_max = max(local_max, i + nums[i]);
        if (i >= max_dist || i == n - 1)
        {
            max_dist = local_max;
            jumps++;
        }
    }
    return jumps;
}