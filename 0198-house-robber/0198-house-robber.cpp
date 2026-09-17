class Solution {
public:

int solve(vector <int>& nums, int index, vector <int>& dp){
    int n = nums.size();
    if (index >= n){
        return 0;
    }
    if (dp[index] != -1){
        return dp[index];
    }
    //include = mc
    int include = nums[index] + solve(nums, index + 2, dp);
    //exclude = mc
    int exclude = 0+ solve(nums, index+1, dp);

    dp[index]= max(include, exclude);
    return dp[index];
}
    int rob(vector<int>& nums) {
        int index = 0;
        vector <int> dp(nums.size(), - 1);
        int ans = solve(nums, index, dp);
        return ans;

    }
};