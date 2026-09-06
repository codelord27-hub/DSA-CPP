class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return 0;
        if (nums[0] >= nums[1]) return 0;
        if (nums[n-1] > nums[n-2]) return n-1;
        int left = 1;
        int right = n-1;

        while (left <= right){
            int mid = (left+right)/2;
            if (nums[mid] < nums[mid + 1]){
                left = mid + 1;
            }
            else if (nums[mid] < nums[mid - 1]){
                right = mid -1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};