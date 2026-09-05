class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        //sort thea array
        sort(nums.begin(), nums.end());
        //initlaize the anser and max diff
        int n = nums.size();
        int maxdiff = INT_MAX;
        int res_sum = 0;
        //travers the array n -2;
        for (int i = 0; i<n-2; i++){
            int left = i+1;
            int right = n-1;

            while(left < right){
                int sum = nums[i] + nums[right] + nums[left];
                int diff = abs(target - sum);

                if (maxdiff > diff){
                    maxdiff = diff;
                    res_sum = sum;
                }
                else if (sum == target){
                    return res_sum;
                    left++;
                    right--;
                }
                else if (sum < target){
                    left++;
                }
                else if (sum > target){
                    right--;
                }
            }
        }
        return res_sum;
        
    }
};