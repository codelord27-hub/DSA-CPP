class Solution {
public:
int findPivotIndex(vector<int>& nums){
//code here
int n = nums.size();
int s = 0;
int e = n-1;

while (s<=e){
    int mid = (s+e)/2;
    if (s == e){
        return mid;
    }
    if(mid + 1 < n && nums[mid]>nums[mid+1]){
        return mid;
    }
    else if (nums[mid] < nums[s]){
        e = mid - 1;
    }
    else{
        s = mid + 1;
    }
}
return -1;
}
int binarySearch(int s, int e, vector<int> nums, int target){
    while (s<=e){
        int mid = (s+e)/2;
        if (nums[mid] == target){
            return mid;
        }
        else if (nums[mid] < target){
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int pivotIndex = findPivotIndex(nums);

        //a1
        //s =0
        //e = pivotindex
        int n = nums.size();
        if (target >= nums[0] && target <= nums[pivotIndex]){
            int ans = binarySearch(0, pivotIndex, nums, target);
            return ans;

        }
        //a2
        //s = pivot + 1
        //end = n-1;
        else{
            int ans = binarySearch(pivotIndex+1, n-1, nums, target);
            return ans;
        }
        return -1;

    }
};