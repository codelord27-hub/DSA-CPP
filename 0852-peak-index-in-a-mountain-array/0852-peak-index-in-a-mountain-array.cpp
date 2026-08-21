class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int ans = -1;

        while (s<=e){
            int mid = (s+e)/2;
            if (arr[mid] < arr[mid+1]){
                s = mid + 1;
            } 
            else{
                //store and compute
                //mera peak element ho bhi skta h nhi bhi h skta h
                ans = mid;
                e = mid -1; 
            }
        }
        return ans;
    }
};