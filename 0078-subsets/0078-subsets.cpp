class Solution {
public:
void solve(vector <int> nums, int index, vector <int>& temp,  vector <vector<int>>& ans){
    int n = nums.size();

    if (index >= n){
        ans.push_back(temp);
        return;
    }
   // temp = nums[index];
    temp.push_back(nums[index]);
    solve (nums, index+1, temp, ans);
    temp.pop_back();
    solve(nums, index+1, temp, ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector<int>> ans;
        int index = 0;
        vector <int> temp;
        solve(nums, index, temp, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};