#include <algorithm>
#include <numeric>
#include <vector>
class Solution {
public:
    bool solve(vector<int>& nums, int target, int index, vector<vector<int>>& dp) {
        int n = nums.size();
        if (target < 0) {
            return false;
        }
        if (index >= n) {
            return false;
        }
        if (target == 0) {
            return true;
        }
        if (dp[index][target] != -1){
            return dp[index][target];
        }
        // include - mc
        bool include = solve(nums, target - nums[index], index + 1, dp);
        // exclude - mc
        bool exclude = solve(nums, target, index + 1, dp);

        return dp[index][target] = include || exclude;
    }
    bool canPartition(vector<int>& nums) {
        int index = 0;
        int sum = accumulate(nums.begin(), nums.end(), 0);

        if (sum % 2 != 0) {
            return false;
        }
        int target = sum / 2;
        vector<vector<int>> dp(nums.size(), vector<int>(target + 1, -1));

        return solve(nums, target, 0, dp);
    }
};