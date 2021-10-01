#include <iostream>
#include <vector>
using namespace std;
twoSum(int nums[], int target, int n)
{
    vector<int> res;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                res.push_back(i);
                res.push_back(j);
            }
        }
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<"\n"; 
}
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n,target;
        cout<<"Enter size of array/vector :\n";
        cin>>n;
        int nums[n];
        for (int i = 0; i < n; i++)
        {
            cin>>nums[i];
        }
        cin>>target;
        twoSum(nums,target,n);
    }
}
/*Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]*/
