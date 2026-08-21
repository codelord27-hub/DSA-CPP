class Solution {
public:
    int mySqrt(int x) {
        int target = x;

        int s = 0;
        int e = target;

        int ans = -1;

        while (s<=e){
            long long int mid = (s+e)/2;
            long long int product = mid * mid;
            if (product == target){
                return mid;
            }
            else if (product < target){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
    }
};