class Solution {
public:
long long multiply(long long a, long long b) {
    long long result = 0;

    while (b > 0) {
        if (b & 1)
            result += a;

        a <<= 1;
        b >>= 1;
    }

    return result;
}
long long int solve(long long int dividend, long long int divisor){
       long long int s = 0;
        long long int e = dividend;
        long long int ans = -1;

        while (s<=e){
            long long int mid = (s)+((e-s)>>1);
           if (multiply(divisor, mid) == dividend){
                return mid;
            }
            if (multiply(divisor, mid) < dividend){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
}
    long long int divide(int dividend, int divisor) {
        if (divisor == 0){
            return INT_MAX;
        }
        
        if (dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }
        long long int ans = solve(abs((long long int)dividend), abs((long long int)divisor));
        if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0)){
            return ans;
        }
        else{
            return 0-ans;
        }
        return 0;
    }
};